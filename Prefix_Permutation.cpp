#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + k);
    vector<int> ans;
    int p = 0;
    for (int j = 0; j < k; j++)
    {
        for (int l = arr[j]; l > p; l--)
        {
            ans.push_back(l);
        }
        p = arr[j];
    }
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }
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