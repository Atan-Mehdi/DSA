class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posIndex=0;
        int negIndex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[posIndex]=nums[i];
                posIndex+=2;
            }else{
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
        }
        return ans;
        
        
        
        
        
        
        
        
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>0){
//                 ans.push_back(nums[i]);
//             }
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0){
//                 ans.push_back(nums[i]);
//             }
//         }

//         for(int i=0;i<nums.size()/2;i++){
//             nums[i]=
//         }


















        // vector<int> positive;
        // vector<int> negative;
        // vector<int> ans;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         positive.push_back(nums[i]);
        //     }else{
        //         nums.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<positive.size();i++){
        //        ans.push_back(positive[i]);
        //        ans.push_back(negative[i]);
        // }
        // return ans;
    }
};