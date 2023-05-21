//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expression)
    {
         stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
      char ch = expression[i];
      // if opening bracket stack push
      // if closing bracket, stack top check and pop
      if (ch == '(' || ch == '{' || ch == '['){
          s.push(ch);
      }else{
        if (!s.empty()) {
          char top = s.top();
          if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
              (ch == ']' && top == '[')) {
                  s.pop();
          }else{
              return false;
          }
        }else{
            return false;
        }
      }
      
    }
    if(!s.empty()){
          return false;
      }else{
          return true;
      } 
    }
    

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends