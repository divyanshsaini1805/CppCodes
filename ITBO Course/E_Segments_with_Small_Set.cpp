#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

ll count1[100001];
ll nums;
ll k;

void add(ll x){

count1[x]++;
if(count1[x] == 1)
    nums++;
}

void dels(ll x){
        count1[x]--;
        if(count1[x] == 0)
        nums--;
}

bool good(){
    return nums <= k;
}

ll solve(vector<ll> a,ll n)
{
    ll count=0;
    ll l=0,res=0;
    f(r,0,n){
        add(a[r]);
        while(!good()){
            dels(a[l]);
            l++;
        }
res += r-l+1;    
}
return res;
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
