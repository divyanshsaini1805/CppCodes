#include<bits/stdc++.h>

using namespace std;

void subArraySumZero(int *arr,int n){
int preFixSum[n];
    preFixSum[0] = arr[0];

    unordered_map<int,int> m;

    for(int i=1;i<n;i++){
        preFixSum[i] = preFixSum[i-1] + arr[i];
        if(m.find(preFixSum[i])!=m.end()){
            cout<<"Subarray Present";
            break;
        }else{
            m.insert(make_pair(preFixSum[i],i));
        }
            
    }
    cout<<endl<<"Not Found";

}

int main(){ 
    
    int n=10;
    int arr[10] = { 1,2,-3,0,5,1,2,2,9,10};
    subArraySumZero(arr,n);
    
    return 0;
}