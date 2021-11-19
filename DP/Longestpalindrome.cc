#include<bits/stdc++.h>

using namespace std;

string reverse1(string str){

// reverse(s.begin(),s.end());
string s;
int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
return str;
}
int LongestPalindromeInAString(string str1, int n, int m){

    //if(!n||!m) return 0;
    string str2 = reverse1(str1);
    //cout<<str2;
     
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
string str1 = "abccba";
string str2 = "abcdef";

int n = str1.size();
int m = str2.size();

// int t[7][7];
// memset(t,-1,sizeof(t));

// cout<<LCS(str1,str2,6,6);
// cout<<endl;
// cout<<LCSmemorized(t,str1,str2,6,6);
// cout<<endl;
cout<<LongestPalindromeInAString(str1, n, m);


}