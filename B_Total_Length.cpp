#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

int currSum=0;
void add(vector<ll> a, int r){
    currSum+=a[r];
}
bool isgood(int s){
    return currSum>s;
}
ll solve(vector<ll> a,ll n,ll s)
{
    ll count=0;
    ll l=0,res=0,len=0,ans=0;
    f(r,0,n){

        add(a,r);
        len++;
        while(isgood(s)){
            currSum-=a[l];
            l++;
            ans+=len;
            len=len-l;
        }
        res +=l-r+1;    
    
    }
return ans;
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
