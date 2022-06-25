#include <bits/stdc++.h> // header file includes every Standard library
#define ll long long
using namespace std;

int main() {

	// Your code here
    ll a,b;
    cin>>a>>b;

    if(a==b)
        cout<<0;
    else if(b%a==0)
        cout<<1;
    else{
        (a&1) ? cout<<a%b+1 : cout<<a%b;
    }

	return 0;
}
