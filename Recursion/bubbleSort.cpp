#include<bits/stdc++.h>
using namespace std;
void solve(int *a,int n)
{
 if(n==1){
     return ;
 }
 for(int i;i<=n-2;++i){
     if(a[i]>a[i+1]){
         swap(a[i],a[i+1]);
     }
 }

 solve(a,n-1);
}
int main()
{
 int it,j,n;
 int a[100]={1,4,7,5,9,13,14,16,56};

 solve(a,9);
 for (int i = 0; i < 9; i++)
 {
     cout<<a[i]<<",";
 }
 
 return 0;
}