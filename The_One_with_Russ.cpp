#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
        int a[1000],b[1000];
        int n,x,k,count=0;
    while(t--){
        cin>>n>>x>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        count = 0;
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[i])<=k)
                count++;
        }
        if(count<x)
            cout<<"NO"<<endl;
        else   
            cout<<"YES"<<endl;
    }
    return 0;
}