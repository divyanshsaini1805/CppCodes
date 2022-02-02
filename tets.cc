#include <iostream>
using namespace std;


void solve(){
    int n;cin>>n;
    string s="";
    string ab="ab";
    string cd="cd";
    if(n==1){
        cout<<"a"<<endl; return;
    }
    if(n==2){
        cout<<"ab"<<endl; return;
    }
    bool a=true;

    for(int i=0;i<n;i+=2){
        if(i==n-1) break;
        if(a){
            s+=ab;
            a=false;
        }
        else{
            s+=cd;
            a=true;
        }
    }
if(s.size()!=n){
    if(a) s+='a';
    else s+='c';
}
cout<<s<<endl;  
}





int main() {

	int t=1;
	cin>>t;
	while(t--){
        solve();
	}
	return 0;
}
