class Solution {
public:
    double powr(double x,int n){
        double result=1;
        for(int i=0;i<32;i++){
            if(n&1) result*=x;
            x*=x;
            n>>=1;
        }
        return result;
    }
    double myPow(double x, int n) {
        if(n<0) {
            return 1/(powr(x,abs(n)));
        }
        return powr(x,n);
    }
};