#include<bits/stdc++.h>
using namespace std;
int solve(int *a,int i,int n,int key)
{
 if(i==n){return -1;}

 if(a[i]==key){
     return i+1;
 }

return solve(a,i+1,n,key);
}

int linear(int arr[],int n, int i,int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key)
        return i+1;

    return linear(arr,n,i+1,key);

}


int main()
{
 int j,n;
 int it[10005] = {1,4,6,8,5,9,5};
 int key;
//  cin>>key;
 
//  cin >> n;
 cout<<solve(it,0,7,6);
 cout<<endl<<linear(it,7,0,6);
 return 0;
}