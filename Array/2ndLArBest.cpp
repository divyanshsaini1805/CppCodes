#include<iostream>
using namespace std;


void zero(int a[]){
int i;

for(i=0;i<5;i++){
    if(a[i]==0 && i<5){
        swap(a[i],a[i+1]);
    }
}
for(int i=0;i<5;i++)
cout<<a[i+1];

}

int main(){
int a[5];

for(int i=0;i<5;i++)
cin>>a[i];

zero(a);

return 0;
}