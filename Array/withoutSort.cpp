#include<iostream>
using namespace std;


void sort012(int a[], int n)
{ unsigned int high,mid=0,low=0;
high=n-1;
  for(unsigned int mid=0;mid<=high;){
     if(a[mid]==0){
        swap(a[mid++],a[low++]);
      }
     else
    if(a[mid]==2){
        swap(a[mid],a[high--]);
        
    }else 
    mid++;
  }
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
sort012(a,n);
cout<<"\n";
print(a,n);
return 0;
}