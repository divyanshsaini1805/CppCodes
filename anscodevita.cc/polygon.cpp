

// #include <bits/stdc++.h>
// using namespace std;


// void solve(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     vector<vector<int>>ans;

//     for(int i = n-1;i>=0;i--){
//       if(s[i]=='0'){
//         int temp = i+1;
//         for(int j = 0;j<=i;j++) {
//           if(s[j]=='1') s[j]='0';
//           else s[j] = '1';
//         }
//         ans.push_back({1ll,temp});
//       }
//     }
//     int siz = ans.size();
//     cout<<siz<<endl;
//     for(auto temp:ans) cout<<temp[0]<<" "<<temp[1]<<endl;
// }

// int main() {
//     int t;cin>>t;
//     while(t--){
//     solve();
//     }
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ak Aniket_Kundu
#define ll long long
#define pb push_back
#define vll vector<long long>
#define vc vector
#define fi first
#define se second
#define pqmin priority_queue<ll,vector<ll>,greater<ll>>
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 
#ifndef ONLINE_JUDGE
#define debug(x) 
#else
#define debug(x) 
#endif
const int mod = 1e9 + 7;


int main()
{  
    IOS;tie;
   int T;
   cin>>T;
   while(T--)
   {
     ll n;
     cin>>n;
     vll a(n);
     f(i,0,n)
       cin>>a[i];
     vll b(n);
      f(i,0,n)
       cin>>b[i];
     vc<vll> slots(n);
     f(i,0,n)
      slots[b[i]].pb(a[i]);
     vc<double> dp(n+1,0);
     multiset<ll> s;
     f(i,1,n+1)
     {
        for(auto&j:slots[i-1])
         s.insert(j);
        if(s.size())
         {
             dp[i]=dp[i-1];
             auto it=s.end();;
             it--;
             dp[i]+=*it;
             s.erase(it);
         }
         else
          break;
     }
     f(i,1,n+1)
      dp[i]/=i;
     double ans=*max_element(all(dp));
     cout<<fixed<<setprecision(6)<<ans<<endl;
      
   }
    return 0;
}
