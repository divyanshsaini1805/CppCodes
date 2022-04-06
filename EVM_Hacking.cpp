#include<bits/stdc++.h>
using namespace std;
int main()
{
 int it,j,n;
 cin >> n;
 while(n--){
     int a,b,c,p,q,r;
     cin>>a>>b>>c>>p>>q>>r;

    //  float r1,r2,r3,temp;
    //  r1 = p/a; r2= q/b; r3=r/c;

    // int ans = max(r1,max(r2,r3));
    // if(r1==ans) temp= p + r2 + r3;
    // else if(r2==ans) temp = r1 + q + r3;
    // else temp = r1 + r2 + r;

    // if(temp>(p+q+r)/2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    int avg = (p+q+r)/2;

    if(p+b+c > avg || a+q+c > avg || a+b+r>avg)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }


 return 0;
}