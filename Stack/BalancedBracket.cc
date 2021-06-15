#include<bits/stdc++.h>
using namespace std;
bool balancedBracket(string str)
{
 stack<char> s;

 for (int i = 0; i < str.size(); i++)
 {    char curChar = str[i];
     if(curChar == '('){
         s.push(curChar);
     }
     else if(curChar==')'){
         if(s.empty() || s.top()!='('){
             return false;
         }
     s.pop();
     }
 }
 return s.empty();
}
int main()
{
string str;
cin>>str;
cout<<balancedBracket(str);
return 0;
}



9q8uv8ro

29l222jog