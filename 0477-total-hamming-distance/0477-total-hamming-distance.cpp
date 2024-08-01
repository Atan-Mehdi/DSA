class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x>0 || y>0){
            if( (x&1) != (y&1) ) count++;
            x=x>>1;
            y=y>>1;
        }
        return count;
    }
    int no_of_bits(int n){
    
    int ans=0;
    while(n>0){
        n=n & (n-1);
        ans++;
    }
    return ans;
}

    
    int totalHammingDistance(vector<int>& nums) {
        
        int total = 0;
    int n = nums.size();
    
    for (int i = 0; i < 32; ++i) { // Assuming 32-bit integers
        int count_1 = 0;
        for (int num : nums) {
            if (num & (1 << i)) {
                count_1++;
            }
        }
        int count_0 = n - count_1;
        total += count_1 * count_0;
    }
    
    return total;
        
        // return 0;
//        int count=0;
//         unordered_map<int, int> mp;
//         // int n=nums.size();
        
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
                
//                 mp[nums[i]^nums[j]]++;
                
//             }
//         }
        
//         for(auto x : mp){
//             count+= x.second * no_of_bits(x.first);
//         }
        
//         return count;
        
    }
};