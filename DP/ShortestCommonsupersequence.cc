//  The longest Common supersequence is the lenght of given string added subrtarected by the lenght of LCS.
// Example SCS of "ABCDEF" and "DFG" is "ABCDEFG" 
// Since both the strngs are present in the resultant string and a common supersequence can be found which contains letter of both string in the shortest possible arrangment.

#include<bits/stdc++.h>

using namespace std;


int printLCS(string str1, string str2, int n, int m){

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


return m+n-t[n][m];
}
int main(){
string str1 = "ABCDEF";
string str2 = "DFG";

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