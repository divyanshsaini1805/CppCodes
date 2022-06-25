#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(vector<ll> v, ll n, ll sum)
{
    ll t[n+1][sum+1];

    for(ll i=0; i<=sum; i++) t[0][i] = INT_MAX ;
    for(ll i=1; i<=n; i++) t[i][0] = 0;

    for(ll i=1; i<=sum; i++){
        if(i%v[i]==0){
            t[1][i] = v[i]/i; 
        }
        else{
        t[1][i] = INT_MAX;
    }
}

for(ll i=2;i<=n;i++){
        for(ll j=1;j<=sum; j++){

            if(j>=v[i-1]){
                t[i][j] = min(t[i-1][j], t[i][j-v[i-1]]+1); 
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
return t[n][sum] == (INT_MAX) ? -1 : 0;
}

int main()
{
ll it,j,n;
cin>>n;
ll sum;
cin>>sum;
vector<ll> v(n);
for(ll i=0;i<n;i++)
    cin>>v[i];

cout<<solve(v,n,sum);
 return 0;
}