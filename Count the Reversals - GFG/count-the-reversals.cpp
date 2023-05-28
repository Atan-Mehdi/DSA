//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string str)
{
     if(str.length()%2==1)
    return -1;
  stack<char> s;
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch=='{'){
      s.push(ch);
    } else {
      if (!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
  //stack contains invalid expression
  int a=0,b=0;
  while(!s.empty()){
    if(s.top()=='{'){
      b++;
    }else{
      a++;
    }
    s.pop();
  }
  return (a+1)/2 + (b+1)/2;
}