#include <bits/stdc++.h> 
using namespace std;


int main(int argc, char const *argv[])
{ int n,num;
    cin>>num;

    while(num>0){

    cin>>n; 
    if(n<10){
      cout<<"1"<<" "<<n<<"\n";
    }   else
    if (n%2==0)
    {
    cout<<"2"<<" "<<n/2<<"\n";
    }
    else
    {
        cout<<"1"<<" "<<n<<"\n";
    }
    num--;
    }
    
    return 0;
}
