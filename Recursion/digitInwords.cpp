#include<bits/stdc++.h>
using namespace std;

char spellings[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void solve(int n)
{
 if(n==0)
    return;

solve(n/10);
cout<<spellings[n%10]<<" ";
}

int main()
{
 int it,j,n;
 cin >> n;

solve(n);
return 0;
}