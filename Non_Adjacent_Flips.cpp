
#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

int main() {
 ll t;cin>>t;
 while(t--){
     ll n;cin>>n;
     string s;cin>>s;
     ll a=0,b=0;
     f(i,0,n) {
        if(s[i]=='1'){
        b++;
         if(s[i]==s[i+1]){
             a++;
         }
         }

     }
              if(b==0)cout<<0<<endl;
         else{
             if(a==0)cout<<1<<endl;
             else{cout<<2<<endl;}
             
         }
}
 return 0;
}
