#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int N = 52;
ll mod = 1000000007;
vector<vector<ll>> matrix(N, vector<ll> (N, 0));


void multiply(int dim, vector<vector<ll>> &A, vector<vector<ll>> &B){
    vector<vector<ll>> res(N, vector<ll> (N, 0));

    for (size_t i = 0; i < dim; i++){
        for (size_t j = 0; j < dim; j++){
            res[i][j] = 0;
            for (size_t k = 0; k < dim; k++){
                ll temp = ((A[i][k] * B[k][j]) % mod);
                res[i][j] = (res[i][j] + temp)%mod;                
            }            
        }    
    }

    for (size_t i = 0; i < dim; i++){
        for (size_t j = 0; j < dim; j++){
            A[i][j] = res[i][j];
        }         
    }
}

void power(int m, ll n){    
    vector<vector<ll>> I(N, vector<ll> (N, 0));

    for (size_t i = 0; i < m; i++){
        for (size_t j = 0; j < m; j++){
            I[i][j] = (i == j ? 1 : 0);
        }    
    }

    while(n){
        if (n&1){
            multiply(m, I, matrix);
            n -= 1;
        }
        else{
            multiply(m, matrix, matrix);
            n /= 2;
        }                   
    }

    for (size_t i = 0; i < m; i++){
        for (size_t j = 0; j < m; j++){
            matrix[i][j] = I[i][j];
        }         
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;

    ll m, n;
    
    while(t--){
        cin>>m>>n;        

        for (size_t i = 0; i < m; i++){
            for (size_t j = 0; j < m; j++){
                cin>>matrix[i][j];
            }    
        }

        power(m, n);

        for (size_t i = 0; i < m; i++){
            for (size_t j = 0; j < m; j++){
                cout<<matrix[i][j]<<" ";
            }    
            cout<<"\n";
        }        
    }

    return 0;
}