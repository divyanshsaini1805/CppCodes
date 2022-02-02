#include<bits/stdc++.h>

using namespace std;


int LCS(string str1,string str2, int n, int m){

if(n==0||m==0) return 0;

if(str1[n]==str2[m])
{return 1 + LCS(str1,str2,n-1,m-1);
}
else{
    return max(LCS(str1,str2,n-1,m),LCS(str1,str2,n,m-1));
}
}

int LCSmemorized(int t[7][7], string str1,string str2, int n, int m){

if(n==0||m==0) return 0;

if(t[n][m]==-1){
if(str1[n]==str2[m])
{return t[n][m] = 1 + LCSmemorized(t,str1,str2,n-1,m-1);
}
else{
    return t[n][m] = max(LCSmemorized(t,str1,str2,n-1,m),LCSmemorized(t,str1,str2,n,m-1));
}
}else{
return t[n][m];
}
}


int LCSbottomUp(string str1, string str2, int n, int m){

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
return t[n][m];
}
int main(){
string str1 = "ahbgdc";
string str2 = "axc";

int n = str1.size();
int m = str2.size();

// int t[7][7];
// memset(t,-1,sizeof(t));

// cout<<LCS(str1,str2,6,6);
// cout<<endl;
// cout<<LCSmemorized(t,str1,str2,6,6);
// cout<<endl;
cout<<LCSbottomUp(str1, str2, n, m);


}