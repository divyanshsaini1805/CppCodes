#include<bits/stdc++.h>

using namespace std;

vector<vector<string>> anagram(vector<string> str){
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> grps;

    for(int i=0;i<str.size();i++){
        string temp = str[i];
        sort(str.begin(),str.end());
        grps[temp].push_back(str[i]);
    }

    for(auto i:grps){
        ans.push_back(i.second);
    }

return ans;
}

int main(){ 
    
    int n=10;
    int arr[10] = { 1,2,-3,0,5,1,2,2,9,10};
    vector<string> v;
    v.push_back("cat");
    v.push_back("dog");
    v.push_back("odg");
    v.push_back("tac");

    vector<vector<string>> ans = anagram(v);
    

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
            cout<<endl;
    }

    return 0;
}