#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll n;
    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            int cnt;

            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << " ^ " << cnt << " ";
        }
    }
    if (n > 1)
        cout << n << " ^ "
             << "1"
             << " ";
}