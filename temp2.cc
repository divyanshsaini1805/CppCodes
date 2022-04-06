// using namespace std;
// #define int long long int
// #define vll vector<long long>
// using   pi = pair<int, int>;
// #define fi first
// #define se second
// #define sz(x) x.s()
// #define bg(x) begin(x)
// #define all(x) bg(x), end(x)
// #define raint(x) x.rbegin(), x.rend()
// #define rsz resize
// #define ins insert
// #define pb push_back
// #define eb emplace_back
// #define ft front()
// #define bk back()
// #define lb lower_bound
// #define ub upper_bound
// #define fr(i,a,b) for(int i = (a); i < (b); ++i)
// #define rf(i,b,ab) for(int i = (b)-1; i >= (a); --i)
// #define eachi(x,a) for(auto &x: a)
// #define ciii(X, Y, Z)       int X, Y, Z; cin>>X>>Y>>Z;


// int sum1 = 0, sum2 = 0;
// void solve()
// {
//   ciii(ab, bc, n);
//   vector<int> v(n);
//   eachi(x, v)cin >> x;

//   sort(all(v));

//   for (int i = n - 1; i >= 0; i--) {
//     int ans = sum1 - sum2;
//     int temp2 = sum2 - sum1;
//     if (abs(ab * v[i] + ans) < abs(bc * v[i] + temp2)) {

//       sum1 += ab * v[i];
//     }

//     else {

//       sum2 += bc * v[i];
//     }

//   }
//   cout << max(sum1, sum2);

// }



// signed main()
// {
//   int test = 1;
//   while (test--)
//   {
//     solve();
//   }
//   return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;
// double solveans( int m,double array1[], double array2[])
// {
//  double s=0.0;
//  int k=m-1;
//  for (int j = 0; j<m;j++)
//  {
//   s+=(array1[k]+array1[j])*(array2[k]-array2[j]);
//   k=j;
//  }
//     return abs(s/2);
// }
// double set1(pair<int,int>g){
//     double cone = 0.0;
//     cone=-1*atan2(g.first,-1*g.second);
//     return cone;
// }

// bool cmpare(pair<int,int>g_1,pair<int,int>g_2) {
//     return set1(g_1)<set1(g_2);
// }

// int main()
// {
//     int m;
//     cin>>m;
//  double array1[m];
//  double array2[m];
//  vector<pair<double,double>> a;
//  for(int i=0;i<m;i++){
//      int x,y;
//      cin>>x>>y;
//      a.push_back({x,y});
//  }
//  sort(a.begin(),a.end(),cmpare);
//  for(int i=0;i<m;i++){
//      array1[i]=a[i].first;
//      array2[i]=a[i].second;
//  }
//  cout<<solveans(m,array1,array2);
// }

#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long int
#define mod 1000000007
#define pb push_back
#define INF 1000000000
#define maxN 1000001
#define vl vector<ll>
using namespace std;
class stud
{
public:
    int id12, p12, p13, p14, co;
    double percent;
    stud()
    {
        id12 = p12 = p13 = p14 = 0;
        co = -1;
    }
};
bool cmpp(stud a, stud b)
{
    if (a.percent > b.percent)
        return true;
    else if (a.percent < b.percent)
        return false;
    else
        return a.id12 < b.id12;
}
int gs(string s)
{
    bool flag = false;
    string ans = "";
    for (int j = 0; j < int(s.length()); j++)
    {
        if (s[j] == '-')
            flag = true;
        else if (flag)
            ans += s[j];
    }
    return stoi(ans);
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cnn, n;
    cin >> cnn >> n;
    int pl[cnn + 1];
    for (int i = 1; i <= cnn; i++)
        cin >> pl[i];
    string it;
    vector<stud> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> it;
        vector<string> inputs;
        string ans = "";
        for (int i = 0; i < int(it.length()); i++)
        {
            if (it[i] == ',')
            {
                inputs.pb(ans);
                ans = "";
            }
            else
                ans += it[i];
        }
        inputs.pb(ans);
        arr[i].id12 = gs(inputs[0]);
        arr[i].percent = stod(inputs[1]);
        arr[i].p12 = gs(inputs[2]);
        arr[i].p13 = gs(inputs[3]);
        arr[i].p14 = gs(inputs[4]);
    }
    sort(arr.begin(), arr.end(), cmpp);
    for (int i = 0; i < n; i++)
    {
        if (pl[arr[i].p12] > 0)
        {
            pl[arr[i].p12] -= 1;
            arr[i].co = arr[i].p12;
        }
        else if (pl[arr[i].p13] > 0)
        {
            pl[arr[i].p13] -= 1;
            arr[i].co = arr[i].p13;
        }
        else if (pl[arr[i].p14] > 0)
        {
            pl[arr[i].p14] -= 1;
            arr[i].co = arr[i].p14;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].co != -1)
        {
            cout << "Student-" << arr[i].id12 << " C-" << arr[i].co << "\n";
        }
    }
    return 0;
}