//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
  int last(int arr[], int n, int x){
	int s=0;
	int e=n-1;
	int mid=(s+(e-s)/2);
	while(s<=e){
		if(arr[mid]==x){
			s=mid+1;
		}else if(arr[mid]>x){
			e=mid-1;
		}else{
			s=mid+1;
		}
		mid=(s+(e-s)/2);
	}
	return e;
}
int first(int arr[], int n, int x){
	int s=0;
	int e=n-1;
	int mid(s+(e-s)/2);
	while(s<=e){
		if(arr[mid]==x){
			e=mid-1;
		}else if(arr[mid]>x){
			e=mid-1;
		}else{
			s=mid+1;
		}
		mid=(s+(e-s)/2);
	}
	return s;
}
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int count=0;

	int lastOcc= last(arr,n,x);
	int firstOcc=first(arr,n,x);
	count=lastOcc-firstOcc+1;
    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends