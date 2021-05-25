#include<bits/stdc++.h>
using namespace std;
int solve(int *a,int n,int key)
{
    int i;
    for (i = n - 1; (i >= 0 && a[i] > key); i--)
        a[i + 1] = a[i];
 
    a[i + 1] = key;
 
    return (i+1);
}



int main()
{
 int it,j,n,key;
 int a[15] = {1,2,4,5,6,7,8,9,10};
//  cin >> n;
 //for(int i=1;i<=n;i++) {
       //cout << " Case #" << it+1 << ": ";
            //solve();
 //}
cout<<solve(a,9,3);
 return 0;
}