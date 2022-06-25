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
vector<int> v(n+1);
for(int i=1;i<n+1;i++) 
    cin>>v[i];

int t[n+1][x+1];

for(int i=1 ; i<=n; i++){
    for(int sum=0;sum<=x;sum++){

        if(sum==0)
            t[i][sum] = 1;
        else{
            int  op1 = (v[i] > sum) ? 0 : t[i][sum - v[i]];
            int  op2 = (i==1) ? 0 : t[i-1][sum];
            t[i][sum] = (op1 + op2)%mod;
        }

    }
}
cout<<t[n][x];
 return 0;
}