//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void merge(int a[],int n,int b[],int m){
	// vector<int> temp(n+m);
	int i=n-1;
	int j=0;
	while(i>=0 && j<m){
		if(b[j]<a[i]){
			swap(b[j],a[i]);
			i--;
			j++;
		}else{
			i--;
		}
	}
	sort(a,a+n);
	sort(b,b+n);
	return ;
}
    int findMidSum(int a[], int b[], int n) {
//           int n=a.size();
// 	int m=b.size();
	// vector<int> merged(m+n);
	merge(a,n,b,n);
	int ans=0;

		int first=n-1;
		int second=0;
		
			ans=a[first];
		
		
			ans+=b[second];
		
// 		ans=ans/2.0;
	
	return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends