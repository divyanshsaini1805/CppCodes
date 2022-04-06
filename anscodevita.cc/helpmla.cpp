#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vll vector<long long>
using   pi = pair<int, int>;
#define fi first
#define se second
#define sz(x) x.size()
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define raint(x) x.rbegin(), x.rend()
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define fr(i,a,b) for(int i = (a); i < (b); ++i)
#define rf(i,b,a) for(int i = (b)-1; i >= (a); --i)
#define eachi(x,a) for(auto &x: a)
#define ciii(X, Y, Z)       int X, Y, Z; cin>>X>>Y>>Z;


int sum1 = 0, sum2 = 0;
void MLA()
{
  ciii(a, b, n);
  vector<int> v(n);
  eachi(x, v)cin >> x;

  sort(all(v));

  for (int i = n - 1; i >= 0; i--) {
    int temp = sum1 - sum2;
    int temp2 = sum2 - sum1;
    if (abs(a * v[i] + temp) < abs(b * v[i] + temp2)) {

      sum1 += a * v[i];
    }

    else {

      sum2 += b * v[i];
    }

  }
  cout << max(sum1, sum2);

}



signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test_cases = 1;
  while (test_cases--)
  {
    MLA();
  }
  return 0;

}