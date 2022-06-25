#include<bits/stdc++.h>
#define ll long long
// #define mod (ll)1e9+7
using namespace std;

const ll mod = 1e9+7;
int main(){

int n;
cin>>n;
int x;
cin>>x;
vector<int> v(n);
for(int i=0;i<n;i++) 
    cin>>v[i];

int dp[x+1];

dp[0] = 1;
for(int i=1;i<=x;i++){
    dp[i]=0;
    for(int coins : v)
        if(i>=coins)
        dp[i] = (dp[i] + dp[i - coins]) % mod;

}
cout<<dp[x];
 return 0;
}