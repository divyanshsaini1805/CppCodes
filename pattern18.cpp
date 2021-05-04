#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{
int n,i,j;    
cin>>n;

for(i=0;i<n;i++)
cout<<"*  ";

for(i=0;i<n/3;i++)
{
    cout<<"\n";
    for(j=n;j<=n+i;j++)
    {cout<<"   ";
    }
    cout<<"*  ";
    
    for(j=i;j<n/3;j++)
    cout<<"   ";

     for(j=i+1;j<n/3;j++)
     cout<<"   ";
     cout<<"*  ";
}

for(i=0;i<(n+1)/2;i++)
{
cout<<"\n";
for(j=i;j<n/2;j++)
cout<<"   ";

 for(j=n;j>n-i-1;j--)
    {cout<<"*  ";
    }
 for(j=n;j>n-i;j--)
    {cout<<"*  ";
    }
}







    return 0;
}
