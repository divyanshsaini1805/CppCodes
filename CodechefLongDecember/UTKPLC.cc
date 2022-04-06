#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n;cin>>n;

 map<int,int> m;

 for(int i=0;i<2*n;i++){
  int x;cin>>x;
  m[x]++;
 }

 bool f = true;

 for(int i=0;i<2*n;i++){
  if(m[i] == 1){
   f = false;
   break;
  }
  else if(m[i] == 0) break;
 }


 if(f) cout<<"YES";
 else cout<<"NO";


}


int main() {
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);

int t=1;
cin>>t;
while(t--)
{
 solve();
 cout<<"\n";
}

return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  long long x,m;  cin>>x>>m;

  //Ek bnne mai 
  ll temp = 2;
  ll cnt  = 0;
  while(temp<=x){
    temp<<=1;
    cnt++;
  }
  temp/=2;
  long long one = cnt+1;
  // cout<<one<<" ";
  if(one>m){
    cout<<0<<"\n";return;
  }
  if(temp==x){
    cout<<1 + (m-one)<<"\n";
  }else{
    cout<<(m-one)<<"\n";
  }

}

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--) 
{
solve();
} 
  return 0;
}



