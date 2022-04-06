#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

int main() { 
    ll n,m; cin >> n >> m;

vector<ll> a(n);
vector<ll> b(m);
for(ll i=0;i<n;i++) cin >> a[i];
for(ll i=0;i<m;i++) cin >> b[i];
ll i=0,j=0,tem=0,count=0,k=0,x=0;

for(ll i=0;i<n;i++)
{
    for(ll j=x;j<m;j++)
    {
        if(a[i]==b[j])
            k++;
        else if(a[i]<b[j])
            {
                x=j;
                break;
            }
    }
    if(k>0)
    {
       count+=k;
        i++;
    while(i<n && a[i]==a[i-1])
        {
            count+=k;
            i++;
        }
        k=0;
        i--;
    }

}

cout << count << endl;
}

