#include<bits/stdc++.h>
using namespace std;

int maxNumberOfWays(int *arr, int n, int sum){

    int t[n+1][sum+1];

    for(int i=0; i<=n; i++) t[i][0] = 1;
    for(int i=1; i<=sum; i++) t[0][i] = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum; j++){

            if(j>=arr[i-1]){
                t[i][j] = t[i-1][j] + t[i][j-arr[i-1]];
            }else{
                t[i][j] = t[i-1][j];
            }

        }
    }
return t[n][sum];
}

int minNumberOfCoins(int *arr, int n, int sum){

    int t[n+1][sum+1];

    for(int i=0; i<=sum; i++) t[0][i] = INT_MAX - 1;
    for(int i=1; i<=n; i++) t[i][0] = 0;

    for(int i=1; i<=sum; i++){
        if(i%arr[i]==0){
            t[1][i] = arr[i]/i; 
        }
        else{
        t[1][i] = INT_MAX - 1;
    }
}

for(int i=2;i<=n;i++){
        for(int j=1;j<=sum; j++){

            if(j>=arr[i-1]){
                t[i][j] = min(t[i-1][j], t[i][j-arr[i-1]]+1); 
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
return t[n][sum] == INT_MAX -1 ? -1 : 0;
}

int mincoins(int *arr, int n, int sum){

    int dp[n+1][sum+1];

    for(int i=0;i<=sum;i++) dp[0][i] = 0;
    for(int i=0;i<=n;i++) dp[i][0] = INT_MAX - 1;

    // for(int j=1; j<= sum; j++){
    //     if(j%arr[j]==0){
    //         dp[1][j] == arr[j]/j;
    //     }
    //     else{
    //         dp[1][j] = INT_MAX -1;
    //     }
    // }
    // for (int i = 0; i < n+1; i++)
    //     {
    //         for (int j = 0; j < sum+1; j++)
    //         {
    //             if(i==0){
    //                 dp[i][j] = INT_MAX-1;
    //             }
    //             else if(j == 0 && i!=0){
    //                 dp[i][j] = 0;
    //             }
    //         }
    //     }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum; j++){
            if(j >= arr[i-1]){
                dp[i][j] = min(dp[i][j-arr[i-1]]+1, dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
return dp[n][sum] == INT_MAX - 1 ? -1 : dp[n][sum];
}

int main(){
    int arr[] = {1,2,3,4};

    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    cout<<maxNumberOfWays(arr,size,sum);
    cout<<endl;
    // cout<<minNumberOfCoins(arr,size,sum);
    cout<<mincoins(arr,size,sum);
}