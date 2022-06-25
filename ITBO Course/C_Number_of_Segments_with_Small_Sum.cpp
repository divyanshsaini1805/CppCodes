#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;
ll solve(vector<ll> a,ll n,ll s)
{
    ll count=0;
    ll l=0,currSum=0,res=0;
    f(r,0,n){

        currSum += a[r];

        while(currSum - a[l] >= s){
            currSum-=a[l];
            l++;
        }
        if(currSum>=s)   res +=l+1;   
    }
return res;
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
    