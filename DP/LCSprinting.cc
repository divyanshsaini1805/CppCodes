#include<bits/stdc++.h>

using namespace std;


string printLCS(string str1, string str2, int n, int m){

    //if(!n||!m) return 0;

    int t[n+1][m+1];

    for(int i=0; i<n+1; i++){
    for(int j=0; j<m+1; j++){
        if(i==0 || j==0)
            t[i][j] = 0;
    }
}
    for(int i=1; i<n+1; i++){
    for(int j=1; j<m+1; j++){
        if(str1[i-1]==str2[j-1]){
            t[i][j] = 1 + t[i-1][j-1];
    }else{ 
        t[i][j] = max(t[i][j-1], t[i-1][j]);
    }
}
}


string s;
int i=n;int j=m;

while(i>0 && j>0){
    if(str1[i-1]==str2[j-1]){
        s.push_back(str1[i-1]);
        i--;j--;
    }else if(t[i-1][j]>t[i][j-1]){
        i--;
    }else{
        j--;
    }
}
return s;
}
int main(){
string str1 = "abclef";
string str2 = "abcdef";

int n = str1.size();
int m = str2.size();

// int t[7][7];
// memset(t,-1,sizeof(t));

// cout<<LCS(str1,str2,6,6);
// cout<<endl;
// cout<<LCSmemorized(t,str1,str2,6,6);
// cout<<endl;
cout<<printLCS(str1, str2, n, m);


}