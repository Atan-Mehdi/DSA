//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void merge(vector<int>& a,int n,vector<int>& b,int m){
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
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	return ;
}
    double MedianOfArrays(vector<int>& a, vector<int>& b)
    {
    	int n1=a.size();
	int n2=b.size();
	if(n1==0){
	    if(n2%2==1) return b[n2/2];
	    else{
	       return  (double)(b[n2/2]+b[(n2/2)-1])/2.0;
	    }
	}else if(n2==0){
	   if(n1%2==1) return a[n1/2];
	    else{
	        return (double)(a[n1/2]+a[(n1/2)-1])/2.0;
	    } 
	}
	if(n1>n2) return MedianOfArrays(b, a);
	
	int n=n1+n2;
	int left=(n1+n2+1)/2;
	int low=0;
	int high=n1;
	while(low<=high){
		int mid1=(low+high)>>1;
		int mid2=left-mid1;
		int l1=INT_MIN; int r1=INT_MAX;
		int l2=INT_MIN; int r2=INT_MAX;
		if(mid1<n1) r1=a[mid1];
		if(mid2<n2) r2=b[mid2];
		if(mid1>=0) l1=a[mid1-1];
		if(mid2>=0) l2=b[mid2-1];
		if(l1<=r2 && l2<=r1){
			if(n%2==1) return max(l1,l2);
			else{
				return (double)(max(l1,l2)+min(r1,r2))/2.0;
			}
		}else if(l1>r2){
		    high=mid1-1;
		}else{
			low=mid1+1;
		}
	}
	return 0;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends