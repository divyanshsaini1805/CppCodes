#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

vector<ll> solve(vector<ll> &a,vector<ll> &b,vector<ll> &c,ll n,ll m)
{
 ll i=0,j=0,k=0;
while(i<n || j<m){
    if(  j==m || (i<n && a[i]<b[j] )){  
        c[k++] = a[i++];
    }else{
        c[k++] = b[j++];
    }
}
return c;
}

int main()
{
ll n,m;
cin >> n>>m;
vector<ll> a(n);
vector<ll> b(m);
vector<ll> c(m+n); 
f(i,0,n)
    cin>>a[i];
f(i,0,m)
    cin>>b[i];
c = solve(a,b,c,n,m);
for(auto x : c)
    cout<<x<<" ";
 return 0;
}