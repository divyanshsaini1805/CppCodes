#include<bits/stdc++.h>
// #define m 1e9+7
#define ll long long
using namespace std;

const ll mod = 1000000007;
// int m = 1e9+7;

ll binpow(ll a,ll b,ll m){


    if(b==0) return 1;

    if(b%2==0){
        ll pw = binpow(a,b/2,m);
        return(pw*pw%m);
    }else{
        ll pw= binpow(a,(b-1)/2,m);
        ll t = (pw*pw%m);
        return (a*t%m);
    }
}
int main()
{
 int n;
 cin >> n;
 while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        int temp = binpow(b,c,mod-2);
        cout<<binpow(a,temp,mod)<<endl;
 }
return 0;
}