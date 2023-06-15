//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
       string ans;
    int mx=INT_MIN;
       int i,j;
    //    i=j=0;
       int l,e;
       l=e=0;
       
       for(int x=0;x<s.length();x++){
           i=j=x;
           while(i>=0 && j<s.length() && s[i]==s[j]){
               l=i;
               e=j;
               i--;
               j++;
           }
           if(e-l+1>mx){
               string temp;
               for(int i=l;i<=e;i++){
                   temp.push_back(s[i]);
               }
               ans=temp;
               mx=e-l+1;
           }
       }
       
            for(int x=0;x<s.length()-1;x++){
           i=x;
           j=i+1;
           while(i>=0 && j<s.length() && s[i]==s[j]){
               l=i;
               e=j;
               i--;
               j++;
           }
           if(e-l+1>mx){
               string temp;
               for(int i=l;i<=e;i++){
                   temp.push_back(s[i]);
               }
               ans=temp;
               mx=e-l+1;
           }
       }
       
    //   cout<<ans;
       return ans; 
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends