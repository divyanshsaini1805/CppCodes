#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;
 
 
int main()
{
ios::sync_with_stdio(false);
ll n,k;
cin>>n>>k;
vector<ll> a(n);
vector<ll> b(k);
f(i,0,n)
    cin>>a[i];
// f(i,0,k){
    int s;
    cin>>s;
 
int lo= -1;
int hi = n;
int mid;
while(lo + 1 <hi){
    mid = lo + (hi-lo)/2;
    if(a[mid] < s)
        lo = mid;
    else
        hi = mid; 
}
cout<<hi+1<<'\n';
 
// }
 
 
 
 return 0;
}