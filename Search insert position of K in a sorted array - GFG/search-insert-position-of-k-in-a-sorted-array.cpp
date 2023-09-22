//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int m)
    {
        int s=0;
	int e=n-1;
	int mid=(s+(e-s)/2);
	while(s<=e){
		if(arr[mid]==m){
			return mid;
		}else if(arr[mid]<m){
			s=mid+1;
		}else{
            e=mid-1;
		}
		mid=(s+(e-s)/2);
	}
	return s;
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
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends