#include<bits/stdc++.h>
using namespace std;
int main()
{

int n=100;
int c=0;
while(n>0){
        c++;
    n = n & (n-1);
}
cout<<c;
return 0;
}
