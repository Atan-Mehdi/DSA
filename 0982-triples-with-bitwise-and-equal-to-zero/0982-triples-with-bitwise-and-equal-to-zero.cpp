class Solution {
public:
    int countTriplets(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int n = nums.size();
        
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                countMap[nums[i] & nums[j]]++;
            }
        }
        
        int result = 0;
        
        
        for (int i = 0; i < n; ++i) {
            for (auto &entry : countMap) {
                if ((nums[i] & entry.first) == 0) {
                    result += entry.second;
                }
            }
        }
        
        return result;
    }
};