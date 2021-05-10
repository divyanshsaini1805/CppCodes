#include<bits/stdc++.h>
using namespace std;
int main()
{

int a =3;
int *b = &a;
int **c;
c = &b;

cout<<a;cout<<endl;
cout<<*b;cout<<endl;
cout<<**c;cout<<endl;

int **p;
**p=10;
// cout<<**p;



 return 0;
}