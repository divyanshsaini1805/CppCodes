#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

vector<int> solve(vector<int> &a,vector<int> &b,vector<int> &c,int n,int m)
{
 int i=0,j=0;
while(i<n || j<m){
    if( j==m || ( i<n && a[i] < b[j])){
        i++;  
}else{
    c[j++] = i;
    }
}
return c;
}

int main()
{
int n,m;
cin >> n>>m;
vector<int> a(n);
vector<int> b(m);
vector<int> c(m);
f(i,0,n)
    cin>>a[i];
f(i,0,m)
    cin>>b[i];
c = solve(a,b,c,n,m);
for(auto x : c)
    cout<<x<<" ";
 return 0;
}