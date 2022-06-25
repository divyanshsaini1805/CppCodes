/*
 Divyansh Saini
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define L cout << "\n";
#define E cerr << "\n";
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define seea(a, x, y)           \
    for (int i = x; i < y; i++) \
    {                           \
        cin >> a[i];            \
    }
#define seev(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sees(s, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        s.insert(x);            \
    }
const ll inf = INT_MAX;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vp64 vec(n);
    v64 ans(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i].first;
        vec[i].second = i;
        ans[i] = i + 1;
    }
    sort(vec.begin(), vec.end());

    bool answer = 1;

    for (int i = 0; i < n; ++i)
    {

        if (i == 0 && vec[i].first != vec[i + 1].first)
        {
            answer = 0;
            break;
        }
        if (i == n - 1 && vec[i].first != vec[i - 1].first)
        {
            answer = 0;
            break;
        }
        if (i > 0 && i < n - 1 && vec[i].first != vec[i + 1].first && vec[i].first != vec[i - 1].first)
        {
            answer = 0;
            break;
        }
        if (vec[i].first == vec[i + 1].first)
        {
            swap(ans[vec[i].second], ans[vec[i + 1].second]);
        }
    }
    if (!answer)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < n; ++i)
            cout << ans[i] << ' ';
        cout << endl;
    }
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {

        solve();
    }
    return 0;
}