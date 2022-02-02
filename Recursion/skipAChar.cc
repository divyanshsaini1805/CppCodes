#include<bits/stdc++.h>
using namespace std;
string skip(string &given, int idx, string &ans){

    if(idx == given.length()){
        return ans;
    }

    if(given[idx]!='a'){
        ans.push_back(given[idx]);
    }

    skip(given,idx+1,ans);

    return ans;
    }

int main(){

string a = "abcdafr";

string ans = " ";
cout<<skip(a,0,ans);

return 0;
}