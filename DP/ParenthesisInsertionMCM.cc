#include<bits/stdc++.h>

using namespace std;

string solve(int i, int j, int n, int bracket[101][101], char &name, string &s){

    if(i==j){
        s.push_back(name++);
        return s;
    }
    s.push_back('(');
    solve(i,bracket[i][j],n,bracket,name,s);
    solve(bracket[i][j]+1,j,n,bracket,name,s);

    s.push_back(')');
return s;
}

void MCM(int *arr, int n){

    vector<vector<int>> t(101,vector<int>(101,-1));
    int bracket[101][101];

    for (int i = 0; i < n; i++)
        t[i][i] = 0;

    for(int L=2; L<n; L++){

        for(int i=1; i<n-L+1; i++){
            
            int j = L+i-1; 
            t[i][j] = INT_MAX;
            for(int  k =i; k<n; k++){
                int temp = t[i][k] + t[k+1][j] + arr[i-1]*arr[k]*arr[j];

                if(temp < t[i][j]){
                    t[i][j] = temp;  
                    bracket[i][j] = k;   
            }
        }

        }
    }
char name = 'A';
string s;
cout<<" Partitioned Parenthesis are ";
cout<<solve(1,n-1,n,bracket,name,s);   

}

int main(){

    int arr[] = {12,45,6,56};
    int n = sizeof(arr)/sizeof(arr[0]);


    MCM(arr,n);


    return 0;
}