#include<iostream>
using namespace std;

void largest(int a[], int n){
int z=a[0];

for(int i=0;i<n;i++){
 if(a[i]>z){
     z=a[i];
 }}
 int y=a[0];
for(int i=0;i<n;i++){
 if(a[i]>y && a[i]<z){
     y=a[i];
 }

} 
cout<<y;
}
int main()
{
    
int a[10],n;
cin>>n;
for(int i=0; i<n; i++)
cin>>a[i];
largest(a,n);
return 0;
}
