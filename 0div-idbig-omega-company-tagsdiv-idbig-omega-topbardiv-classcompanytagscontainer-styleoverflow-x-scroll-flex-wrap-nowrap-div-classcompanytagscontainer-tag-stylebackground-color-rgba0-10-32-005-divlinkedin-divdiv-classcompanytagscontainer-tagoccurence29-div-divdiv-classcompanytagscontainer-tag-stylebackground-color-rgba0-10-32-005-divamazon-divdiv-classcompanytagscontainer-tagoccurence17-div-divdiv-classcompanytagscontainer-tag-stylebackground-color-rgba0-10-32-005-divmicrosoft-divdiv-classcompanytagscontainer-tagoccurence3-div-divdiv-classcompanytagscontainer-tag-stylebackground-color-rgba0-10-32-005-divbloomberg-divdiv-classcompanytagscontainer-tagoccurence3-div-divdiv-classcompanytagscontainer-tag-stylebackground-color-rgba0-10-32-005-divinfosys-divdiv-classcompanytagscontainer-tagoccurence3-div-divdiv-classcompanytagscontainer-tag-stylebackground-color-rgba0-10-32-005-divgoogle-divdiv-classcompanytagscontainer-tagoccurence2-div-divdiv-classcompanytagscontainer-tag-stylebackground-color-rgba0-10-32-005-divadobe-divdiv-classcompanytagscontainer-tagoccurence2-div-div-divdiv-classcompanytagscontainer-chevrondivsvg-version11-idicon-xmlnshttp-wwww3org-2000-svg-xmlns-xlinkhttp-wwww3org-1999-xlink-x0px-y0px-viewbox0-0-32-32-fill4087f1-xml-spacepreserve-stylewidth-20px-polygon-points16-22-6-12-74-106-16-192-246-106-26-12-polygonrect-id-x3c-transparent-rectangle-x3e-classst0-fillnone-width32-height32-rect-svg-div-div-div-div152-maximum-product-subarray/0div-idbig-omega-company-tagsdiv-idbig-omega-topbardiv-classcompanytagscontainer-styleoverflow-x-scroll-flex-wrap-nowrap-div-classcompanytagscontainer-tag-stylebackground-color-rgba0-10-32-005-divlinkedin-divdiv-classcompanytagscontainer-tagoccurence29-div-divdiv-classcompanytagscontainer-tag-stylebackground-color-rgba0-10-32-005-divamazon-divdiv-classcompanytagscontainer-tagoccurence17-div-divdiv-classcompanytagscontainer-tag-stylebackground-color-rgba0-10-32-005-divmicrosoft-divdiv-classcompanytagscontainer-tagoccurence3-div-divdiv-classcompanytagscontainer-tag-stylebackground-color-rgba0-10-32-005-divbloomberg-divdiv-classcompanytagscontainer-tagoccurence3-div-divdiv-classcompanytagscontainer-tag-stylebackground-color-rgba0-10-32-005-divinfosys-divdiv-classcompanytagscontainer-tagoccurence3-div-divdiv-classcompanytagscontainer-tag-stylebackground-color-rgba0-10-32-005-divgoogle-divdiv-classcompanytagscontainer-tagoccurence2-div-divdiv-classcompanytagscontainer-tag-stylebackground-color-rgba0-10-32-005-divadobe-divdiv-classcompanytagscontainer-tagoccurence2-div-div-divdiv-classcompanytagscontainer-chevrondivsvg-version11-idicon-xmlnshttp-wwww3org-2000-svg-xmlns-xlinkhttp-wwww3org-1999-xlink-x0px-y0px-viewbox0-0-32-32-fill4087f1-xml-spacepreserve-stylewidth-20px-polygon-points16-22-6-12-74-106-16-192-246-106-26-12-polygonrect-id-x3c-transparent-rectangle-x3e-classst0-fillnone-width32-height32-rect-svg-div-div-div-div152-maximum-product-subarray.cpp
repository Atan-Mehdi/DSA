class Solution {
public:
    int maxProduct(vector<int>& arr) {
    int pref=1;
	int suff=1;
	int n=arr.size();
	int maxProduct=INT_MIN;
	for(int i=0;i<n;i++){
		if(pref==0) pref=1;
		if(suff==0) suff=1;
		pref=pref*arr[i];
		suff=suff*arr[n-1-i];
		maxProduct=max(maxProduct,max(suff,pref));
	}
	return maxProduct;
    }
};