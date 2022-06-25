#include<bits/stdc++.h>
// #define m 1e9+7
#define ll long long
using namespace std;

const ll mod = 1000000007;
// int m = 1e9+7;
//program for (a^B^c)%m        
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



ll exp(ll a, ll n){
    ll res =1;
    while(n)
    {
        if(n%2)
        {res*=a; n--;}
        else
        {
        a*=a; n/=2;
        }
    }
return res;

}
int main()
{
 int n;
//  cin >> n;
//  while(n--){
        ll a,b;
        cin>>a>>b;
        //int temp = binpow(b,c,mod-2); //by fermat's little theorem
        // cout<<binpow(a,b,mod)<<endl;
        cout<<exp(a,b)<<endl;
//  }
return 0;
}