class Solution {
public:
    bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); 
    int cnt = 0;
    int noOfB = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
    int minDays(vector<int>& arr, int m, int k) {
       long long val = m * 1ll * k * 1ll;
    int n = arr.size(); 
    if (val > n) return -1; 
	int mini = INT_MAX, maxi = INT_MIN;
	for (int i = 0; i < arr.size(); i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
	int s=mini;
	int e=maxi;
	int mid=s+(e-s)/2;
	while(s<=e){
		// int bouq=findBouq(arr,mid,k,m);
		if(possible(arr, mid, m, k)){
           e=mid-1;
		}else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return s;  
    }
};