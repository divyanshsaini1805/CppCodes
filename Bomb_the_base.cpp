
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, j, n) for (ll i = j; i < n; i++)
#define pb push_back
#define all(v) v.begin(), v.end()
#define dtb(n, x) bitset<n>(x).to_string()
#define fs first
#define se second
const ll INF = 1e9 + 7;


void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<ll> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];
  while (m--)
  {
    ll c, x;
    cin >> c >> x;
    vector<ll> arr(2 * x);
    for (int i = 0; i < 2 * x; i++)
      cin >> arr[i];
    ll temp = vec[c - 1];
    vec[c - 1] = 0;
    for (int i = 0; i < arr.size() - 1; i += 2)
    {
      vec[arr[i + 1] - 1] = (vec[arr[i + 1] - 1] + temp * arr[i]) % INF;
    }
  }
  for (auto i : vec)
    cout << i << "\n";
}

int main()
{
  solve();
  return 0;
}