#include<bits/stdc++.h>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

ll count1[100001];
ll nums;
ll k;

struct stack1{
vector<ll> s, smin = {LLONG_MAX}, smax = { LLONG_MIN};  
void push(ll x){    
    s.push_back(x);
    smin.push_back(::min(smin.back(),x));
    smax.push_back(::max(smax.back(),x));

}

ll pop(){
    ll res = s.back();
    s.pop_back();
    smin.pop_back();
    smax.pop_back();
    return res;    
}

bool empty(){
return s.empty();
}

ll max(){
    return smax.back();
}   

ll min(){
return smin.back();
}
};


stack1 s1,s2;


void add(ll x){
    s2.push(x);
}

void dels(ll x){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }

s1.pop();
}

bool good(){
    ll mx = max(s1.max(),s2.max());
    ll mn = min(s1.min(),s2.min());

    return mx - mn <= k ;
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
