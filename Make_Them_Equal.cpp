#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

// bool checkParity(vector<ll> a, ll test){
//     if(test==0){
//     f(i,0,a.size()){
//         if(a[i]%2!=0)
//             return false;           
//     }
//     }else{
//         f(i,0,a.size()){
//         if(a[i]%2==0)
//             return false;

//     }
//     }
//     return true;
// }

// int solve(vector<ll> a){

    




// }
// int main()
// {
// ll t;
// cin >>t;
// while(t--){
// int n;cin>>n;
// vector<ll> a(n);
// f(i,0,n)
//     cin>>a[i];
// bool res;

// if(a[0]%2==0)
//     res =  checkParity(a,0);
// else res = checkParity(a,1);

// if(res==true)
//     return 0;
// else{
//     cout<<solve(a)<<endl;
// }
// }
//  return 0;
// }



int main() {  
    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;
        ll a = 0;
        for(ll i=0;i<n;i++){
            ll j;
            cin>>j;
            if(j%2 == 1){
                a++;
            }
        }
        ll temp = n-a;

        if(temp != a){
            if((a%2 == 0) && (a/2 < temp)){
                cout<<a/2<<endl;
            }
            else{
                cout<<temp<<endl;
            }
        }
        else if(temp==a){
            if(a%2 == 0){
                cout<<a/2<<endl;
            }
            else{
                cout<<a<<endl;
            }
        }
    }
    return 0;
}
