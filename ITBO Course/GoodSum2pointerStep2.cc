#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

ll greaterthenEqualtoSum(vector<ll> &a,ll n, ll s)
{
 ll i=0,l=0,k=0,res=INT_MAX;

 ll sum =0;

 f(r,0,n)
    {
     sum += a[r];
     while(sum < s-a[l]){
         sum -=a[l];
         l++;
     }   
    res = min(res,r-l+1);


    }

return res;
}

int main()
{
ll n,m,s;
cin >> n>>s;
vector<ll> a(n);
f(i,0,n)
    cin>>a[i];
cout<<greaterthenEqualtoSum(a,n,s);
 return 0;
}