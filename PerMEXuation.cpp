// #include<bits/stdc++.h>
// using namespace std;


// void solve()
// {
//     int n;
//     int h = 1;
//     string str;cin >> n >> str;
//     if (str[0] == '0' || str[1] == '0' || str[n] == '0'){cout << "No\n";return;}
//     vector<int> v;v.push_back(0);
//     for (int i = 2; i < str.size() - 1; i++){
//         if (str[i] == '0')
//             v.push_back(i);
//         else
//         {
//             v.push_back(h);h = i;
//         }
//     }

    
//     v.push_back(h);
//     cout << "Yes\n";
//     for (auto it : v)
//         cout << it << " ";
//     cout << endl;
// }

// int main()
// {int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,w,i;cin>>n>>w;
    int a[n];
    int sum =0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        sum+=a[i];
        if(w<=sum){
            break;
        }
    }
    
    int ans=i;
    cout<<ans<<endl;
    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}