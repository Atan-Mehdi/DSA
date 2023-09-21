//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void merge(vector<int>& skill, int low, int mid, int high){
    int count=0;
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        
        if(skill[left]<=skill[right]){
           temp.push_back(skill[left]);
           left++;
        }else{
            
            temp.push_back(skill[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(skill[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(skill[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        skill[i]=temp[i-low];
    }
    // return count;
}
int inverseCount(vector<int> &skill , int low ,int mid, int high){
    // int left=low;
    int right=mid+1;
    int count=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && skill[i]>((long long )2*(skill[right]))) {
            right++;
        }
        count=count+(right-(mid+1));
    }
    return count;
}
    int ms(vector <int> & skill, int low,int high){
    int count=0;
    if(low>=high) return count;
    int mid=(low+high)/2;
    count+=ms(skill,low,mid);
    count+=ms(skill,mid+1,high);
    count+=inverseCount(skill,low,mid,high);
    merge(skill,low,mid,high);
    return count;
}
    int countRevPairs(int n, vector<int> arr) {
        return ms(arr,0,n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends