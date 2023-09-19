class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
    vector<int> ans;
	int n=v.size();
	int el1,el2;
	int count1=0;
	int count2=0;
	for(int i=0;i<n;i++){
		if(count1==0 && el2!=v[i]){
			el1=v[i];
			count1=1;
		}
		else if(count2==0 && el1!=v[i]){
			el2=v[i];
			count2=1;
		}else if(el1==v[i])count1++;
		else if(el2==v[i])count2++;
		else{
			count1--;
			count2--;
		}
	}
	count1=count2=0;
	for(int i=0;i<n;i++){
		if(v[i]==el1)count1++;
		if(v[i]==el2)count2++;
	}
	if(count1>(n/3))ans.push_back(el1);
	if(count2>(n/3))ans.push_back(el2);
	return ans;
    }
};