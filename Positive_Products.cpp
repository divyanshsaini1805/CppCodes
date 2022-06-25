#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

ll count1[100001];
ll nums;
ll k;


ll sum(int n){
    ll f = 0;
    for(int i = n; i>=1; i--){
        f+=1;
    }
    return f;
}
ll solve(vector<ll> a,ll n)
{
    ll count=0;
    ll l=0,res=0,r=n-1;

    int ab=0,bc=0;

    f(i,0,n){
        if(a[i] == 0 ) ab++;
        if(a[i] < 0) bc++;
    }


    long long a2 =0, a1 = 0;
    a1 = sum(n-(ab+bc+1));
    if(bc > 1){
        a2 = sum(bc - 1);
    }
    return a1+a2; 

    
}

int main()
{
ll size,s;
cin>>size>>k;
vector<ll> a(size);
f(i,0,size)
    cin>>a[i];


cout<<solve(a,size)<<endl;

 return 0;
}
