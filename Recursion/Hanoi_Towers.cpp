#include <bits/stdc++.h> 
using namespace std;
void TOH(int n, char A,char  B, char C){
  
  if(n==1){
      cout<<" Move Disk "<< n << " From "<< A <<" To "<< C<<endl;
      return;
  }
 TOH(n-1,A,C,B);
      cout<<" Move Disk "<< n << " From "<< A <<" To "<< C<<endl;

 TOH(n-1,B,A,C);

}

int main()
{ int n;
 cin>>n;

 TOH(n,'A','B','C');    
    return 0;
}