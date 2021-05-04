#include<iostream>
#include <bits/stdc++.h>
 
using namespace std;

void solve(int a, int b){
 a = a^b;
 b = b^a;
 a = a^b;
cout<<a<<endl<<b;
 
}

int getithBit(int n, int i){
return ((n & (1<<i))!= 0 ? 1 : 0 );
}

int setithBit(int &n,int i){

    int mask = 1<<i;
    n = n | mask;
    return n;
}
int deleteithBit(int n,int i){

    int mask = ~(1<<i);
    n = n & mask;
    return n;
}

int findSingle(int ar[],int ar_size)
    {
        int ar_size = sizeof(ar)/sizeof(int);
        int res = ar[0];
        for (int i = 1; i < ar_size; i++)
            res = res ^ ar[i];
 
        return res;
    }


int main()
{
 
 int a[5]= {10,10,20,20,30},b;
 
//  cin >> a >> b;
//  solve(a,b);
// cout<<deleteithBit(a,b);
// cout<<setithBit(a,b);
cout<<findSingle(a,5);
return 0;
}
