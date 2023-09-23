//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int N){
	      int s=0;
    int e=N-1;
    int mid=s+(e-s)/2;
    while(s<e){
       if(mid&1){
           if(arr[mid]==arr[mid-1]){
               s=mid+1;
           }else{
               e=mid;
           }
       }else{
           if(arr[mid]==arr[mid+1]){
               s=mid+1;
           }else{
               e=mid;
           }
       }
       mid=(s+(e-s)/2);
    }
    return arr[e]; 
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends