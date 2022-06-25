#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;
ll solve(vector<ll> a,ll n,ll s)
{
 
    ll l=0,currSum=0,res=INT_MAX;
    f(r,0,n){

        currSum += a[r];

        while(s <= currSum-a[l]){
            currSum-=a[l];
            l++;
        }
    if(currSum>=s)
        res = min(res,r-l+1);
     
    
    }
return res==INT_MAX ? -1 : res;
}
int main()
{
ll it,j,n;
ll size,s;
cin>>size>>s;
vector<ll> a(size);
f(i,0,size)
    cin>>a[i];

cout<<solve(a,size,s)<<endl;

 return 0;
}

// [5:26 pm, 08/04/2022] (｀・ω・´): Dear Student, your Economic Times Campus Stars Phase 2 test is pending.ID: divyanshsaini1805@gmail.com Pass: M2EIiCa9 bit.ly/ETCS5P2