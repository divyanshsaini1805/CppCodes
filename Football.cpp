#include<bits/stdc++.h>
using namespace std;

void arr_input(int b[],int n){
    for (int i = 0; i < n; i++)
 {
     cin>>b[i];
 }
}

int solve()
{ int a[50],b[50],c[50],max=0,n;
cin>>n;

arr_input(a,n);
arr_input(b,n);
 
for (int i = 0; i < n; i++)
 {      a[i] = a[i]*20;
        b[i] = b[i]*10;
        c[i] = a[i] - b[i];
    if(c[i]<0){
        c[i]=0;
    }
    if(max<c[i]){
        max=c[i];
    }
     
 }

 return max;
}
int main()
{
 int it,j,n,N;
 cin >> n;
 
 while(n>0){
     cout<<solve()<<endl;
     n--;
     }
 return 0;
}