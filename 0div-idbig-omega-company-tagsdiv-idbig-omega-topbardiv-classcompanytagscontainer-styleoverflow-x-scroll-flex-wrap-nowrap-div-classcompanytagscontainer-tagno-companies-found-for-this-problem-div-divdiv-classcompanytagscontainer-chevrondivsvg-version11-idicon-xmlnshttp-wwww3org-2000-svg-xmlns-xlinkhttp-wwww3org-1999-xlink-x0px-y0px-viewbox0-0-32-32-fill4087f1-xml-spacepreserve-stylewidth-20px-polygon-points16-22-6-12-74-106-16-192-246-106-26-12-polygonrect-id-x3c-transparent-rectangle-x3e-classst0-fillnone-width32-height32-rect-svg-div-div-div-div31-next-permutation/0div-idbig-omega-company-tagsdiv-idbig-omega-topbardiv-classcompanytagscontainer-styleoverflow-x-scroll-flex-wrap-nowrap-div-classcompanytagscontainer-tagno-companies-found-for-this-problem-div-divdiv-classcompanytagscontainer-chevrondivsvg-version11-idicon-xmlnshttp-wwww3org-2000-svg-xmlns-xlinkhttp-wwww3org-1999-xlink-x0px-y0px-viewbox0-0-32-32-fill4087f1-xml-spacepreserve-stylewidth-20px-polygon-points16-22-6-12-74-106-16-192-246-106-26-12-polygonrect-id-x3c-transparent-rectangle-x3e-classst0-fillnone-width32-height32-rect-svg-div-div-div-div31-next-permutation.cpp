class Solution {
public:

    void nextPermutation(vector<int>& a) {
        
    int index=-1;
    int n=a.size();
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        sort(a.begin(),a.end());
        return ;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin()+index+1,a.end());
    return ;
    //     bool flag=false;
    //     int originalD=convertDigit(a);
    // int n=a.size();
    // int mini=INT_MAX;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<n;j++){
    //         swap(a[i],a[j]);
    //         int digit=convertDigit(a);
    //         int diff=digit-originalD;
    //         // if(diff==originalD){
    //         //     flag=true;
    //         // }
    //         if(diff>0){
    //             mini=min(mini,digit);
    //             swap(a[i],a[j]);
    //             flag=true;
    //         }else{
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    //     if(flag){
    //        a = solve(mini,n);
    //         return ;
    //     }
    //     return sort(a.begin(),a.end());
    }
};