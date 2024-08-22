class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        vector<int> arr(n);
        arr[0]=nums[0];
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]+nums[i];
            // if(nums[i]%k==0) ans++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=((arr[i] % k) + k) % k;
            }else{
                arr[i]=(arr[i])%k;
            }
            
        }
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0) ans++;
            if(mp.find(arr[i])!=mp.end()){
                ans=ans+mp[arr[i]];
            }
            mp[arr[i]]++;
            
        }
        
        // cout<<abs(-2)%6<<endl;

        return ans;
        
    }
};