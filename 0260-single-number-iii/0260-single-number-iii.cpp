class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_no=0;
        for(int i=0;i<nums.size();i++){
            xor_no=xor_no^nums[i];
        }
        int temp=1;
        while( !(xor_no & temp) ){
            temp = temp<<1;
        }
        int first=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&temp){
                first=first^nums[i];
            }
        }
        // cout<<xor_no<<" "<<first<<" "<<temp<<endl;
        
        int second=first^xor_no;
        return {first,second};
    }
};