#include<bits/stdc++.h>
using namespace std;
// #define ll long long

int solve()
{
int a[1005], prefix[1005];
int count,sum,no;
cin>>count;

prefix[1005] = {0};
// prefix[0] = 1;
for (int i = 0; i < count; i++)
{
    cin>>a[i];
    sum += a[i];
    sum = sum%count;
    sum = (sum+count)%count;
    prefix[sum]++;
}

int ans;
for (int i = 0; i < count; i++)
{
    // cout<<prefix[i]<<",";
    int no = prefix[i];
    ans = ans + ((no)*(no-1))/2;
}

return ans;
}
int main()
{
 int it,j,n; 
 cout<<solve();
 return 0;
}