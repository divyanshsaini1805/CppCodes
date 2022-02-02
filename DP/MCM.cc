#include<bits/stdc++.h>

using namespace std;

int MCM(int *arr, int n){

    vector<vector<int>> t(101,vector<int>(101,-1));

    for (int i = 0; i < n; i++)
        t[i][i] = 0;

    for(int L=2; L<n; L++){

        for(int i=1; i<n-L+1; i++){
            
            int j = L+i-1; 
            t[i][j] = INT_MAX;
            for(int  k =i; k<n; k++){
                int temp = t[i][k] + t[k+1][j] + arr[i-1]*arr[k]*arr[j];

                if(temp < t[i][j])
                    t[i][j] = temp;     
            }
        }
    }
    

return t[1][n-1];
}

int main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<MCM(arr,n);


    return 0;
}