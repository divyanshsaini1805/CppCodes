#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

ll solve(vector<ll> a,ll n, ll p)
{
    ll count=0;
    ll l=0,res=0, sum=0,r=0;
    f(r,0,n){
        sum += a[r];
        while(sum > p){
            sum -= a[l];
            l++;
        }
res += r-l+1;    
}

cout<<r-l<<" "<< res<<'\n';
return res;
}

int main()
{
ll size,s,p;
cin>>size>>p;
vector<ll> a(size);
f(i,0,size)
    cin>>a[i];
solve(a,size,p);

 return 0;
}
