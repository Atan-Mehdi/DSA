class Solution {
public:
    void heapify(vector<int>& arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    return ;
}
void heapsort(vector<int>& arr,int n){
	int size=n-1;
    while(size>0){
		swap(arr[size],arr[0]);
		
		heapify(arr,size,0);
		size--;
		
	}
}
    vector<int> sortArray(vector<int>& arr) {
       int n=arr.size();
	for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
	heapsort(arr,n);
	return arr; 
    }
};