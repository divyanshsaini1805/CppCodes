#include<iostream>
using namespace std;


void reverse(int a[], int start, int end){


int temp = a[start];

for(int i=1; i<=end; i++){
    a[i-1]=a[i];
}

a[end]=temp;
}
void input(int a[10],int n){

for(int i = 0;i<n;i++){
    cin>>a[i];
}

}
void print(int a[],int n){
for(int i=0;i<n;i++){
cout<<a[i]<<", ";
}    
}
int main(){
int a[100],n;
cin>>n;
input(a,n);
print(a,n);
reverse(a,0,n-1);
cout<<"\n";
print(a,n);
return 0;
}