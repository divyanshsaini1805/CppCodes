#include<bits/stdc++.h>

using namespace std;

int dp[501][501];
    bool isPalindrome(string String, int i, int j){
        while(i < j)
          if(String[i++] != String[j--])
            return false;
        return true;
    }
    
    
    int solve(string &str, int i, int j){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int mn = INT_MAX,tempans;
        if(i>=j || isPalindrome(str,i,j)==true)
            return 0;
        
            
        for(int k=i; k<j; k++){
             tempans = solve(str,i,k) + solve(str,k+1,j) + 1;
            
            if(tempans<mn){
                mn = tempans;
            }
        }
     return dp[i][j] = mn;
    }
    
    int palindromicPartition(string str){
        int n = str.size();
        memset(dp,-1,sizeof(dp));
        int ans = solve(str,0,n-1);
        return ans;
    }

    
int main(){


    string str = "ababbbabbababa";
    int n = str.size();
    cout<<palindromicPartition(str);
    return 0;
}