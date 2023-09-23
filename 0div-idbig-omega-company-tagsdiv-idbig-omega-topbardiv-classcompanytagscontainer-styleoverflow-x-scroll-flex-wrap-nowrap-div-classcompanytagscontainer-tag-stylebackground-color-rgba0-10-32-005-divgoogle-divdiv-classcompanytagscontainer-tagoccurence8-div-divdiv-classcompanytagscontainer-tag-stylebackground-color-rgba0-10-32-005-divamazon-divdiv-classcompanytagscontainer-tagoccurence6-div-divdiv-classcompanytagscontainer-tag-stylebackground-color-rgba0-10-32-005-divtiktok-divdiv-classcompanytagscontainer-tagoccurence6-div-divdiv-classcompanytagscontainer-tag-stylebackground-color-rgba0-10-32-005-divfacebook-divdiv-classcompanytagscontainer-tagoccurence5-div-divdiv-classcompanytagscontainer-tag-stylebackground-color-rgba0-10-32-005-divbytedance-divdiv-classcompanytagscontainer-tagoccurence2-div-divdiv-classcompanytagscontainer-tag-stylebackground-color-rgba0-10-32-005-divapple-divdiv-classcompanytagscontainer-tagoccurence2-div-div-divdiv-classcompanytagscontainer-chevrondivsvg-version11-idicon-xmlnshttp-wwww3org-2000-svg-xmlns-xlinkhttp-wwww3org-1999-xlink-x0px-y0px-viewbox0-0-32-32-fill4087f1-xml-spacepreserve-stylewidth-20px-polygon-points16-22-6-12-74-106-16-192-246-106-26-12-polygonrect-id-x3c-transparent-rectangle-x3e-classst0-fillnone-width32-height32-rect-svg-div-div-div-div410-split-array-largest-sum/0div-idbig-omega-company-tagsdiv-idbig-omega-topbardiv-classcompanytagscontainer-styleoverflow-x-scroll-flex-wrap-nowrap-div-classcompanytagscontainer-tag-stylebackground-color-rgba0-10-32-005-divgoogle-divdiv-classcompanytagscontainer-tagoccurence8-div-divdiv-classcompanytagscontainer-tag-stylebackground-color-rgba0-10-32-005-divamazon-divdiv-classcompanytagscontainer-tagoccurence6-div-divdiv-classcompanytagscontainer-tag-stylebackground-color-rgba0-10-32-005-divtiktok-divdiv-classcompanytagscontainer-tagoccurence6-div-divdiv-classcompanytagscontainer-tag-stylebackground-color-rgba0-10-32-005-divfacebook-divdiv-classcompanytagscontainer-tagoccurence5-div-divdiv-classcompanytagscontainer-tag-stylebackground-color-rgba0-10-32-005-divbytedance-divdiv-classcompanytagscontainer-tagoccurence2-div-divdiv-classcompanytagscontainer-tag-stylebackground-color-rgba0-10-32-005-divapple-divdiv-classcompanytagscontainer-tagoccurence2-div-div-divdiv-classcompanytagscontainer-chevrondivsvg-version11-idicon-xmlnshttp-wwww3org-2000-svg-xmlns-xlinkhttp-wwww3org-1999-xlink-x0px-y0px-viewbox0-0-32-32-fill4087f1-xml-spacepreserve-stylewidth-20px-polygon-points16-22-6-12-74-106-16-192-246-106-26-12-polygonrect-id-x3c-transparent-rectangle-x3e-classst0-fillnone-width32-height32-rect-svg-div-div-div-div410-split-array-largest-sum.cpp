class Solution {
public:
    int countStudents(vector<int> arr, int mid, int k){
    int student=1;
    int page=0;
    for(int i=0;i<arr.size();i++){
       if((page+arr[i])<=mid){
          page+=arr[i];
       }else{
           student++;
           page=arr[i];
       }
    }
    return student;
}

    int splitArray(vector<int>& a, int k) {
        int low=*max_element(a.begin(),a.end());
    int high=accumulate(a.begin(),a.end(),0);
    while(low<=high){
        int mid=(low+(high-low)/2);
        int student=countStudents(a,mid,k);
        if(student>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
    }
};