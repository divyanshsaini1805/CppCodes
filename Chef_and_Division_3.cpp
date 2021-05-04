#include<iostream>
using namespace std;


void Nchef(){
  int n,num=0;
  int N,K,D;
  int a[N];
  
   cin>>n;
  
  while(n){
   cin>>N>>K>>D;
   for(int i=0;i<N;i++){
       cin>>a[i];
    num=num+a[i];
   }
  
   
   if((D*K)<=num){
       cout<<D<<"\n";
   }else{
       cout<<num/K<<"\n";
   }
   num=0;
   n--;
  }

}

int main()
{
    Nchef();
    return 0;
}
