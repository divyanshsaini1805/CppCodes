// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int M,N; 
//     cin>>N>>M;   
//     int n = M+N+2;
//     int temp = n;
//     int i=0;
//     int arr[n];
//     string s;
//     if(N>=M) 
//         s.push_back('0');
//     else    
//         s.push_back('1');
//     while(n>1){
//         if(s[i]=='0')
//             s.push_back('1');
//         else    
//             s.push_back('0');
//         i++;
//         n--;
//     }
//     cout<<temp<<endl<<s<<endl;
// }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m; 
    cin>>n>>m;
    string s = "";
        if(m==n){
            for(int i=0; i<n+1; i++){
                s+="01";
            }
        }else
        if(m>n){
            for(int i = 0; i<n+1; i++)
                s+="10";
            for(int i=0; i<m-n-1;i++)
                s+="110";
            s+="1";
        }else{
            for(int i=0;i<m;i++)
                s+="01";
            for(int i=0;i<n-m;i++)
                s+="010";
        }
        cout<<s.size()<<endl;
        cout<<s<<endl;
    }
return 0;
}