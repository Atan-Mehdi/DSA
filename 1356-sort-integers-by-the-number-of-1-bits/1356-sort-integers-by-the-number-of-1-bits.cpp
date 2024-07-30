class Solution {
public:
  static  int no_of_bits(int n){
    
    int ans=0;
    while(n>0){
        n=n & (n-1);
        ans++;
    }
    return ans;
}

static bool cmp(int a, int b){
    if(no_of_bits(a) == no_of_bits(b)) return false;
    return no_of_bits(a) < no_of_bits(b);
}

vector<int> sortByBits(vector<int>& arr) {

    sort(arr.begin(),arr.end());
    
    stable_sort(arr.begin(),arr.end(),cmp);
    return arr;
}

};