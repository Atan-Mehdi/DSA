class Solution {
public:
    void update(vector<int> &sumArr, int num){
        for(int i=0;i<32;i++){
            int ith_bit= num & (1<<i);
            if(ith_bit){
                sumArr[i]++;
            }
        }
    }
    int numFromBits(vector<int> sumArr){
        
        int sum=0;
        for(int i=0;i<32;i++){
            sum=sum + (sumArr[i]* (1<<i));
        }
        return sum;
        
    }
    int singleNumber(vector<int>& nums) {
       vector<int> sumArr(32,0);
        for(auto num : nums){
            update(sumArr,num);
        }
        for(int i=0;i<32;i++){
            sumArr[i]=sumArr[i]%3;
        }
        
        return numFromBits(sumArr);
        
        
        
    }
};