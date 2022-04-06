#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 1; i <= n; i++)
    vec.push_back(i);
    if (n == 1){cout << 1 << endl;return;
    }
    if (k == n - 1){swap(vec[0], vec[1]);
        for (auto e : vec)
        {
            cout << e << " ";
        }
        cout << endl;return;
    }
    int sw = 0;
    k = n - k;
    while (k--){swap(vec[sw], vec[sw + 1]);sw++;}
    for (auto e : vec){cout << e << " ";}
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}