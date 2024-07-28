class Solution {
public:
    string getHint(string secret, string guess) {
        int count_of_b=0;
        int count_of_c=0;
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]) count_of_b++;
        }
        unordered_map<char,int> m;
        for(auto ch:secret){
            m[ch]++;
        }
        
        for(int i=0;i<guess.length();i++){
            if(m[guess[i]]>0){
                count_of_c++;
                m[guess[i]]--;
            }
        }
        count_of_c-=count_of_b;
        string x=to_string(count_of_b);
        string y =to_string(count_of_c);
        return x+"A"+y+"B";
    }
};