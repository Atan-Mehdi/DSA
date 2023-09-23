//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int countStudents(int arr[],int n, int mid, int k){
    int student=1;
    int page=0;
    for(int i=0;i<n;i++){
       if((page+arr[i])<=mid){
          page+=arr[i];
       }else{
           student++;
           page=arr[i];
       }
    }
    return student;
}

    int splitArray(int a[] ,int n, int k) {
        int low=*max_element(a,a+n);
    int high=accumulate(a,a+n,0);
    while(low<=high){
        int mid=(low+(high-low)/2);
        int student=countStudents(a,n,mid,k);
        if(student>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends