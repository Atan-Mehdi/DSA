//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int findLimit(vector<int>& arr, int mid){
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum+=ceil((double)(arr[i])/(double)(mid));
	}
	return sum;
}
    int smallestDivisor(vector<int>& arr, int limit) {

           int s=1;
	// long long sum=0;
	// for(int i=0;i<arr.size();i++){
	// 	sum+=arr[i];
	// }
	int e=*max_element(arr.begin(), arr.end());
	int mid=s+(e-s)/2;
	while(s<=e){
		int sum=findLimit(arr,mid);
		if(sum<=limit){
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
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends