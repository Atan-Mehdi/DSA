class Solution {
public:
    
    vector<int> decode(vector<int>& encoded) {
        int xored=0;
        int n=encoded.size();
        for(int i=1;i<=n+1;i++){
            xored=xored^i;
        }
        for(int i=1;i<encoded.size();i=i+2){
            xored=xored^encoded[i];
        }
        vector<int> ans;
        ans.push_back(xored);
        for(int i=0;i<n;i++){
            int element=ans[i]^encoded[i];
            ans.push_back(element);
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<pair<int, int > > v;
//         int n=encoded.size();
        
//         for(int i=1;i<=n+1;i++){
            
//             int b = i ^ encoded[0];
//             if (b <= n+1 && b!=0) {
//             v.push_back({i, b});
//             }
//         }
//         vector<int> ans;
//         int el2=0;
//         bool flag=true;
//         for(auto i : v){
//             int temp2=0;
//             int temp = i.second ^ encoded[1];
//             // if( temp!=0 && temp <=n+1){
//             //     el2=i.first;
//             //     // break;
//             // }
//             int j=2;
//             while(n>2 && j<n){
//                 temp = temp ^ encoded[j];
//                 if(temp!=0 && temp <=n+1){
//                     flag=true;
//                 }else{
//                     flag=false;
//                 }
//                 j++;
                
//             }
//             if(flag){
//                el2=i.first; 
//             }
//             //  if(temp2!=0 && temp2 <=n+1){
//             //     el2=i.first;
//             // }
//         }
//         ans.push_back(el2);
//         for(int i=0;i<n;i++){
//             int el=ans[i] ^ encoded[i];
//             ans.push_back(el);
//         }
//         return ans;
        
        
        
        
        
//         vector<int> ans;
//         int n=encoded.size();
//         ans.push_back(n ^ encoded[0]);
        
//         for(int i=0;i<n;i++){
//             int temp=ans[i]^encoded[i];
//             ans.push_back(temp);
//         }
//         return ans;
    }
};