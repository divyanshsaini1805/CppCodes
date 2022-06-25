#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

int main()
{
ll n,s;
cin>>n;
vector<ll> a(n);
f(i,0,n)
    cin>>a[i];
sort(a.begin(),a.end());
cin>>s;
while(s--){
    int first,second;
    cin>>first>>second;
    int left, right;

    int low = -1; int high = a.size(),mid;

    while(low + 1 < high){

    mid = low + (high - low)/2;

    if(a[mid] <= second){
        low = mid;
    }else
        high = mid;
    }
    right =  low+1; 


    int lo = -1; int hi = a.size(), m;

    while(lo + 1 < hi){

    m = lo + (hi - lo)/2;

    if(a[m] < first){
        lo = m;
    }else
        hi = m;
    }
    left =  hi+1;

cout<<right - left + 1<<" ";
}

 return 0;
}
