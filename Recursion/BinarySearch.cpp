#include<bits/stdc++.h>
using namespace std;
int solve(int *a,int i,int n,int key)
{
    int mid = (i+(n-1))/2;
 if(i==n){
     return -1;
     }
if(a[mid]==key){
    return mid;
}
if(a[n/2]>key){
return solve(a,i,mid,key);
}
return solve(a,mid+1,n,key);

}


int main()
{
 int j,n;
 int it[10005] = {1,4,6,8,10,12,15};
 int key;
//  cin>>key;
 
//  cin >> n;
 cout<<solve(it,0,7,15);
 return 0;
}