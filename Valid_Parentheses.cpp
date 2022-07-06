#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s)
 {
     stack<char> g;
     for(int i=0; i<s.length(); i++)
     {
         if(s[i]=='(' || s[i]=='[' || s[i]=='{')
         {
             g.push(s[i]);
         }
         else if(s[i] == ')')
         {
             if(i==0 || g.empty() || g.top() != '(')
                {
                    return false;
                }

                g.pop();
         }
         else if(s[i] == ']')
         {
             if(i==0 || g.empty() || g.top() != '[')
                {
                    return false;
                }

                g.pop();
         }
         else if(s[i] == '}')
         {
             if(i==0 || g.empty() || g.top() != '{')
                {
                    return false;
                }

                g.pop();
         }

     }
     return g.empty();
 }

int main()
{
    string ss = "{{}[][[[]]]}";
    cout<<isValid(ss);


    return 0;
}
