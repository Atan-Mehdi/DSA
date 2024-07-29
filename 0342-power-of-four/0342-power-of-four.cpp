class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<0) return false;
        for(int i=2;i<32;i=i+2){
            if( (n&(n-1))==0   &&  (n & (1<<i))) {
              
                return true;
            }
        }
        
        return false;
    }
};