class Solution {
public:
    void rev(vector<int>& arr,int s,int e){
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            k=k%n;
        }
        rev(nums,0,n-k-1);
        rev(nums,n-k,n-1);
        rev(nums,0,n-1);
        // vector<int> ans(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     ans[(i+k)%nums.size()]=nums[i];
        // }
        // nums=ans;
        
    }
};