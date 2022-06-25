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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i <= e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define L cout<<"\n";
#define E cerr<<"\n";
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
const ll inf = INT_MAX;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;
 

void solve(){

    ll n;
    cin>>n;
    ll grid[n+1][n+1];

    for(ll i=1; i<=n; i++)
        for(ll j=1; j<=n; j++)
            {
                char a;
                cin>>a;
                if(a == '.')  grid[i][j] = 0;
                else grid[i][j] = 1;

            }
    
    ll dp[n+1][n+1];

    for(ll i=n ; i>=1; i--){
        for(ll j=n ; j>=1; j--){

            if( i==n && j==n )
                dp[i][j] = 1;
            else{

            ll op1 = (i==n) ? 0 : dp[i+1][j];
            ll op2 = (j==n) ? 0 : dp[i][j+1];
            dp[i][j] = (op1 + op2) % md;
            if(grid[i][j])
                dp[i][j] = 0;
            }

        }
    }   

    
    if(grid[n][n]) 
        cout<<0; 
    else cout<<dp[1][1];
} 
int main()
{
 fast_cin();
 

solve();
 
 return 0;
}