class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        int r=arr.size()-1;
         priority_queue<int,vector<int>,greater<int> > maxheap;
         for(int i=0;i<k;i++){
             maxheap.push(arr[i]);
         }
         for(int i=k;i<=r;i++){
             if(arr[i]>maxheap.top()){
                 maxheap.pop();
                 maxheap.push(arr[i]);
             }
             
         }
         return maxheap.top();
    }
};