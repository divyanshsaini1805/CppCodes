#include <iostream>

#define f(i,a,n) for(ll i=a;i<n;i++)
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,x;
	    cin>>n>>x;
	    ll b[n];
        ll sum=0;
	    for(ll i=0;i<n-1;i++){
	        cin>>b[i];
	    }
	    f(i,0,n-1){
            sum+=b[i];
        }

        if(sum/n >= x)
            cout<<0<<endl;
        else cout<<(n*x)-sum<<endl;
	    
	}
	return 0;
}
