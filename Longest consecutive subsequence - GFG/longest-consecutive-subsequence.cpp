//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
     sort(a, a + n);
    // int n=a.size();
    int count=1;
    int maxCount=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            continue;
            count++;
        }
        if(a[i+1]-a[i]==1){
           count++;
        }else{
            maxCount=max(maxCount,count);
            count=1;
        }
    }
    return max(maxCount,count);
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends