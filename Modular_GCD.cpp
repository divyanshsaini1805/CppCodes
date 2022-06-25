//Divyansh
#include <iostream>
#include <bits/stdc++.h>
#define  ll long long
#define f(i,a,n) for(ll i=a;i<n;i++)

using namespace std;

void solve(ll n){
ll a[n];
            
        for(ll i=0;i<n;i++){
                ll t ;
                cin >> t;
                ll p = (ll)log2(t);
                a[i] = p;
            }
            ll q;
            cin >> q;
            for(ll i=0;i<q;i++){
                ll s,y,z;
                cin>>s;
                cin>>y;
                cin>>z;
                ll p = (ll)log2(z);
                ll count = 0;
                for(ll j= s-1;j<y;j++){
                    if(a[j]==p)count++;
                }
                ll ans =(y-s+1)-count;
                
                cout << ans << endl;
            }
}

int main() {
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        solve(n);
    }
	return 0;
}