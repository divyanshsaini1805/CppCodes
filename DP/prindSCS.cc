//  The longest Common supersequence is the lenght of given string added subrtarected by the lenght of LCS.
// Example SCS of "ABCDEF" and "DFG" is "ABCDEFG" 
// Since both the strngs are present in the resultant string and a common supersequence can be found which contains letter of both string in the shortest possible arrangment.

#include<bits/stdc++.h>

using namespace std;

void lcs(string& a, string& b, int x, int y, int t[][1001]){
    //Initialization
    for(int i=0; i<x+1; i++) t[i][0] = 0;
    for(int j=0; j<y+1; j++) t[0][j] = 0;
    
    //lcs 
    for(int i=1; i<x+1; i++){
        for(int j=1; j<y+1; j++){
            if(a[i-1] == b[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
}

string shortestCommonSupersequence(string a, string b){
   int x = a.size(), y = b.size();
    int t[1001][1001];

	//Fill t
   lcs(a,b,x,y,t);
   
   int i=x, j=y;
   string res = "";
   while(i>0 && j>0){
       if(a[i-1] == b[j-1]){
           res.push_back(a[i-1]);
           --i;
           --j;
       }else{
           if(t[i-1][j] > t[i][j-1]) {
               res.push_back(a[i-1]);
               i--;
           }
           else {
               res.push_back(b[j-1]);
               j--;
           }
       }
   }
    while(i>0){
        res.push_back(a[i-1]);
        i--;
    }
    while(j>0){
        res.push_back(b[j-1]);
        j--;
    }
   reverse(res.begin(), res.end());
   return res;
}


int main(){
string str1 = "abac";
string str2 = "cab";
string scs = shortestCommonSupersequence(str1, str2);
cout<<scs;
return 0;
}