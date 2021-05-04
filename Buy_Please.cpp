#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int x,int y)
{
 return (a*x) + (b*y);
}
int main()
{
int a,b,x,y;
cin >> a>>b>>x>>y;
cout<<solve(a,b,x,y);
return 0;
}