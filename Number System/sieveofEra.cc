#include<bits/stdc++.h>
#define ll long long
using namespace std;


const ll mod = 1e9+7;

//(a+b)%m = (a%m + b%m)%m
//(a*b)%m = (a%m *   b%m)%m

// (a/b) = (a%m x inv(b)%m)%m

// fermat' litlle theorem = 
    // (a^p-2)%m = a^-1%m  because (a/b)%m = 1%p is m == prime number
    // therefore a^-1  =  a^m-2%m 


int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int gcd_mofified(int a,int b,int &x, int &y){
    if(b==0)
    {   x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int ans = gcd_mofified(b,a%b,x1,y1);
    x1 =  y1;
    y1 = x1-y1*(a/b);
    return ans;


}

int binpow(int a,int b, int m){
    if(b==0) return a%m;

    if(b%2==0){
        int pw = binpow(a,b/2,m);
        return(1ll*pw*pw%m);
    }else{
        int pw= binpow(a,(b-1)/2,m);
        int t = (1ll*pw*pw%m);
        return (1ll*a*t%m);
    }
}

void countDivisors(int  n){
    
// if(n==0) return;
vector<int> divisors(n+1,0);
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        divisors[j]+=1;
    }
}
cout<<divisors[n]<<"\n";
}


void sieveOfErathemeses(int n){
    vector<bool> prime(n+1,true);

    for(int  i=2;i*i <=n;i++){
        if(prime[i]==true){

            for(int j=i*i;j<=n;j=j+i)   
                prime[j] = false;
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==true)
            cout<<i<<"\n";
    }
}

int main(){
    int n;
    n=10;
    sieveOfErathemeses(n);
    countDivisors(10);

    cout<<binpow(3,4,mod);
    cout<<endl;
    cout<<gcd(3,4);
    // cout<<gcd()
    }