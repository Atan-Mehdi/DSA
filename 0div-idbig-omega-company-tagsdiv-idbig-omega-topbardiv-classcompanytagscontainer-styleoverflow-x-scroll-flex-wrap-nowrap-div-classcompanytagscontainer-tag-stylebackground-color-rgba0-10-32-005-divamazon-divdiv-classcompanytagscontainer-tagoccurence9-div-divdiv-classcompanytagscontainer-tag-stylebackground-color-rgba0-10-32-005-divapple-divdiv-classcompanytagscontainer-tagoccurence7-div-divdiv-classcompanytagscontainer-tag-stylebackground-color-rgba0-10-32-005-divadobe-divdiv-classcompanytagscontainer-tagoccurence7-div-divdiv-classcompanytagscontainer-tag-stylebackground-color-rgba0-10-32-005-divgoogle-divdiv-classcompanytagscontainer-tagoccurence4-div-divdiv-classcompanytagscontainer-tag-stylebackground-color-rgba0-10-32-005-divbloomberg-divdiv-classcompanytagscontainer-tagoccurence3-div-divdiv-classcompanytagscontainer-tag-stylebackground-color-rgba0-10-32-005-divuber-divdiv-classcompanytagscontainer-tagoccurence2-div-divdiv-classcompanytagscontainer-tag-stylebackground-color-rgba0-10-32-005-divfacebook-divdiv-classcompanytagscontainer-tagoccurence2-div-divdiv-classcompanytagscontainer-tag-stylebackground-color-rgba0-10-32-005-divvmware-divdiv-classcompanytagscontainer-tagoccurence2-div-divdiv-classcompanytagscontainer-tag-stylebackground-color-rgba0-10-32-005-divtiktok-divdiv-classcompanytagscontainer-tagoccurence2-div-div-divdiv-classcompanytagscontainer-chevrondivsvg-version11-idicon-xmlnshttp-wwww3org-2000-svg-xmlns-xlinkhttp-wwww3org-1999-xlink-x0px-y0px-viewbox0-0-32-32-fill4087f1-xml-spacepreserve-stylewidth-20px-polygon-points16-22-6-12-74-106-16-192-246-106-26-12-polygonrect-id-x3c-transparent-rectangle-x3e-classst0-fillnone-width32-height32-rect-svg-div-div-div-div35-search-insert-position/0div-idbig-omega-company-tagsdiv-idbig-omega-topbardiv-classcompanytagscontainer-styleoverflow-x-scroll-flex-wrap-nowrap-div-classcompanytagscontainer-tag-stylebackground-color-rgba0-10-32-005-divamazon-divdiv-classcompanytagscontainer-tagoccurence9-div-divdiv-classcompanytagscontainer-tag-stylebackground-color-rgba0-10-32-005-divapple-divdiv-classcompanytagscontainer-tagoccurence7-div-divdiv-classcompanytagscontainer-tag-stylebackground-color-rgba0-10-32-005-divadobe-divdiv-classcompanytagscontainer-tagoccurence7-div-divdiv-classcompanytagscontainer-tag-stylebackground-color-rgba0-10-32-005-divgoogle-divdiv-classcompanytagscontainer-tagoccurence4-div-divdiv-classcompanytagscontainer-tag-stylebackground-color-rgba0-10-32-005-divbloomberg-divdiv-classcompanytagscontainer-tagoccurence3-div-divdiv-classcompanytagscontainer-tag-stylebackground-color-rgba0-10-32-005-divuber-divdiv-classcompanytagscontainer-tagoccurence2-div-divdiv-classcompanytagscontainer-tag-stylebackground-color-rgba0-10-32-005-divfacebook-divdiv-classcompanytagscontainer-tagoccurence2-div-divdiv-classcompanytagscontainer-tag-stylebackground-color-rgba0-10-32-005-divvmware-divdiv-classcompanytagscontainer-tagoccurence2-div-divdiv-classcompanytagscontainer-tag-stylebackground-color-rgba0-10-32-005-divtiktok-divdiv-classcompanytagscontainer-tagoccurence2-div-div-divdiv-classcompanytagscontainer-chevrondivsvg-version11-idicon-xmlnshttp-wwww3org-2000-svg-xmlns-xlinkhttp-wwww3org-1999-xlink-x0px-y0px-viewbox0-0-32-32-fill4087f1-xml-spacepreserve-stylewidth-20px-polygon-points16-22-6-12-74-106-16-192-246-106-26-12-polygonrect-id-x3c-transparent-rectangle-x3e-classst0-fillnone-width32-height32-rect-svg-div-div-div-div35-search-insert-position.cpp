class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
        int s=0;
	int e=arr.size()-1;
	int mid=(s+(e-s)/2);
	while(s<=e){
		if(arr[mid]==m){
			return mid;
		}else if(arr[mid]<m){
			s=mid+1;
		}else{
            e=mid-1;
		}
		mid=(s+(e-s)/2);
	}
	return s;
    }
};