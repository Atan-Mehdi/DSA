class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int a=left;
        int b=right;
        
        if(left == right) return left;
        
        if(left==0 || left ==1) return 0;
        
        long long int count1=0;
        long long int count2=0;
        
        while(left>0){
            count1++;
            left =left>>1;
        }
        while(right>0){
            count2++;
            right=right>>1;
        }
        // cout<<count1<<" "<<count2<<endl;
        
        if(count1==count2){
            // return 0;
            int ans=a;
            for(long long int i=a+1;i<=b;i++){
                ans= ans&i;
            }
            return ans;
            // if((a+1)==b) {return a&b;}
            // int ans=1<<(count1-1);
            // return ans;
        }
        else{
            return 0;
        }
        
        
        // return 0;
        // if(left == right) return left;
        // if(left==0 || left ==1 || right == 2147483647) return 0;
        // int ans=left;
        // for(int i=left+1;i<=right;i++){
        //     ans=ans & i;
        // }
        // return ans;
    }
};