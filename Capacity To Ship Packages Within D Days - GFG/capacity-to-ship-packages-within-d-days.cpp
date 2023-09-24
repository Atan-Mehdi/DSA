//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int findDays(int arr[], int n,int mid,int d){
    int days=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }else{
            days++;
            sum=arr[i];
        }
        
    }
    return days;
}
    int leastWeightCapacity(int arr[], int n, int d) {
       int s=*max_element(arr,arr+n);
    int e=accumulate(arr,arr+n,0);
    int mid=s+(e-s)/2;
    while(s<=e){
        int days=findDays(arr,n,mid,d);
        if(days<=d){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends