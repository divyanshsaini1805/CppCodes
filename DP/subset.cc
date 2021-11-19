#include<bits/stdc++.h>
using namespace std;


bool subset(int *arr, int n, int sum){

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

int arr[] = {1,4,6,8};
int n = sizeof(arr)/sizeof(arr[0]);

int sum = 18;

cout<<subset(arr,n,sum);
return 0;
}