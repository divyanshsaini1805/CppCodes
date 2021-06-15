#include<bits/stdc++.h>
using namespace std;
int findMaxLen(string str) {
        int maxans = 0;
        stack<int> s;
        s.push(-1);
        for (int i = 0; i < str.size(); i++) {
            char curChar=str[i];
            if (curChar == '(') {
                s.push(i);
            } else {
                s.pop();
                if (s.empty()) {
                    s.push(i);
                } else {
                    maxans = max(maxans, i - s.top());
                }
            }
        }
        return maxans;
    }
int main()
{
string str;
cin>>str;
cout<<findMaxLen(str);
return 0;
}