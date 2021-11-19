#include<bits/stdc++.h>
using namespace std;


bool subset(int *arr, int n){

int sum=0; 

for(int i=0; i<n; i++) {sum = sum + arr[i];}

if(sum%2!=0) return false;

bool dp[n+1][sum+1];

for(int i=0; i<=sum; i++)   dp[0][i] = false;
for(int i=0; i<=n; i++)  dp[i][0] = true;

for(int i=1; i<=n; i++){
    for(int j=1; j<=sum; j++){
        if(arr[i-1]<=j){
            dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
         if(arr[i-1]>j){
            dp[i][j] = dp[i-1][j];
        }
    }
}
return dp[n][sum];
}


int main(){

int arr[] = {2,4,6,8};
int n = sizeof(arr)/sizeof(arr[0]);
int sum = 10;

if (subset(arr, n) == true)
        cout << "Can be divided into two subsets of equal sum";
    else
        cout << "Can not be divided into two subsets of equal sum";
return 0;
}