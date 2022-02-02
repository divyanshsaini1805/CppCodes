#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
    char a,b,c,x,y;
    cin>>a>>b>>c;
    cin>>x>>y;

    if(a==x||a==y)
        {
        cout<<a<<endl;
        }
        else if(b==x||b==y)
        {
        cout<<b<<endl;
        }
        else if(c==x||c==y)
        cout<<c<<endl;
    }
}