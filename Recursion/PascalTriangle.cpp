#include<bits/stdc++.h>
using namespace std;



 static int position(int n,int a)
{
    if(a==n)
    {
        return a;
    }
    else if(a>n)
    {
        return a/2;
    }
    return position(n,a*2);
}

  

int main()
{
 int it,j,n;
 cin >> n;
 cout<<position(n,2);
 return 0;
}