#include <bits/stdc++.h>
using namespace std;

    #define fast { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
    #define pb push_back
    #define ll long long 
  
   

 
 
ll calcu(string s)
{
    ll n = s.size();
    ll ans=0;
    for(ll i=1;i<n-1;i++)
        ans+=11*(s[i]-'0');
     ans += 10*(s[0]-'0');
    ans += s[n-1]-'0';
   
    return ans;
}
 
     int main() 
    {
        fast
       
     
        ll tt=1;
       cin>>tt;
     
        for(int i=1; i <= tt; ++i)
        {
                 ll n,k;
        cin>>n>>k;
        ll first =-1;
        ll sec=-1;
       ll a = 0; ll b= 0;
        string s;
        cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(first == -1) first = i;
                sec = i;
            }
        }
       
        a = first;
         b = -1 +  n  - sec;
       
         
        if(first == -1 && sec == -1) {
            
        }
         else if(first == -1 )
        {
            if(k >= b )
            
                swap(s[n-1],s[sec]);
            
        }
        else if(sec == -1  )
        {
            if(k >= a)
            
                swap(s[0],s[first]);
            
        }
        else if(sec == first)
        {
            if(b<=k)
            
                swap(s[n-1],s[sec]);
            
            else if(a<=k)
            {
                swap(s[0],s[first]);
            }
        }
        else{
            if(a+b > k) {
            if(b<=k)
            
                swap(s[n-1],s[sec]);
            
             else if(a<=k)
            
                swap(s[0],s[first]);
            
            }
            else if(a+b<=k)
            {
                swap(s[0],s[first]);
                swap(s[n-1],s[sec]);
            }
            
        }
       
        cout << calcu(s) << endl;

    }
         
        
     
       
    }