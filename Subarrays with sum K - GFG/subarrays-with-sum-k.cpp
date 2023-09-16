//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int arr[], int n, int k)
    {
         map<int,int> mp;
        int count=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int rem=sum-k;
            count+=mp[rem];
            mp[sum]++;
            }
        return count;
    //     int count=0;
    // int sum=0;
    // // sort(arr.begin(),arr.end());
    // int i=0;
    // int j=0;
    // sum+=arr[i];
    // while(j<n){
    //     while(i<=j && sum>k){
    //         sum-=arr[i];
    //         i++;
    //     }
    //     if(sum==k){
    //         count++;
    //     }
    //     j++;
    //     if(j<n ){
    //       sum+=arr[j];
    //     }
    // }
    // return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends