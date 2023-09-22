//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
  int pivot(int nums[],int n){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0] && nums[mid]<=nums[e]){
                return 0;
            }
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    int findMin(int arr[], int n){
        int p=pivot(arr,n);
        return arr[p];
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends