class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag=true;
        string first=strs[0];
        for(int i=0;i<first.length();i++){
            for(int j=1;j<strs.size();j++){
                string second;
                second.resize(200);
                second = strs[j];
                      if(first[i]!=second[i]){
                          flag=false;
                      }

                     
            }
             if(flag)
                ans.push_back(first[i]);
        }
        return ans;
    }
};