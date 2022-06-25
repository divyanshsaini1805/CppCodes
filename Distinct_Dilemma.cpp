
#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
#define all(vec) vec.begin(),vec.end()
using namespace std;

void solve(){
ll t;
    cin>>t;
    while(t--){
 ll n;
  cin >> n;
  vector<ll>vec(n);
  ll s = 0;
  f(i,0,n) {
    cin >> vec[i];
    s += vec[i];
  }
  ll x = 1, ans = 0;
  while (s > 0) {
    s -= x;
    ans += 1;
    x += 1;
  }
  if (s < 0)
    cout << ans - 1<<endl;
  else
    cout << ans<<endl;

    
    }
}

int main() {
  // your code goes here

solve();

  return 0;
}
