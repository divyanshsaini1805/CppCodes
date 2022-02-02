#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
 for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for (int k = i; k <= j; k++)
        {
                cout<<a[k]<<",";
        }   
        cout<<endl;   

 }
 }
 return 0;
}

int sumSubarray(int a[],int n){
int msum=0,l,r;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
            int  csum=0;
        for (int k = i; k <= j; k++)
                {
                        csum = csum + a[k];
                        cout<<csum<<endl;
                }
        if(msum<csum)
                {msum=csum;
                 l = i;
                 r = j;
                }
        
        
 
 }
 } 
 cout<<"MAx Sum "<<msum<<endl;      
 for(int k=l;k<=r;k++)
 cout<<a[k]<<",";
 return msum;
}

void kadene(int a[],int n){
  int cs=0,ms=0;
  for (int i = 0; i < n; i++)
  {
          cs += a[i];
          if(cs<0)
                { 
                    cs=0;
                  }
  ms = max(cs,ms);
  }
 cout<<ms; 

}
void kadene1(int a[],int n){
  int cs=1,ms=0;
  for (int i = 0; i < n; i++)
  {
          cs *= a[i];
          if(cs==0)
                cs=0;
           if(cs<0){  
                ms = max(cs,ms); if(cs<ms) cs = 0;
           }
  ms = max(cs,ms);
  }
 cout<<ms; 

}
int main()
{
 int it,j;
//cin >> n;
//  int a[10000]; 
 int a[] = {-10,20,30};
  int n = sizeof(a)/sizeof(int);
 //for(int i=1;i<=n;i++) {
       //cout << " Case #" << it+1 << ": ";
            //solve();
 //}
kadene1(a,n);
 return 0;
}