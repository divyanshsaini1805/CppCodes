// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define loop(i,n) For(i,0,n,1)
// int ll mod = 1e9 +7;


// int main(){
//   int t; cin>>t;
//   ll ans = -1;
//   bool bool1 = true; 
//   int a = 1e6,b = 1e8; 
//   bool bool2 = true;
//   while(t--){
//     int x,y; cin>>x>>y;
//     if ( bool1 and x==a and y!=b){
//       a =x;
//       b =y;
//       bool1 = false ;
//       bool2 = true;
//       ans++;
//     }
//     else if ( bool2 and y == b and x!=a){
//       a = x; b = y;
//       bool2 = false;
//       bool1 = true;
//       ans++;
//     }
//     else if ( y!= b and x!=a) {
//       a =x; b = y; 
//       bool1 = true; bool2 = true;
//       ans++;

//     }
//     else{
//           a =x; b = y; 

//     }
//   }
//   cout<<(ans+1);return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     // accept n, vector of n elements

//     int n=5;
//     cin >> n;
//     vector<int> v ;
//     // = {-3, -4, -5, 0, 0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int sum1=0, sum2=0, sum1Turn = true;
//     int start = 0, end = n - 1;
//     while (start <= end)
//     {
//         if (v[start] >= v[end] && sum1Turn)
//         {
//             cout << v[start] << "a ";
//             sum1 += v[start];
//             start++;
//             sum1Turn = v[start] > 0 ? sum1Turn : !sum1Turn;
//         }
//         else if (v[start] >= v[end] && !sum1Turn)
//         {
//             cout << v[start] << "b ";
//             sum2 += v[start];
//             start++;
//             sum1Turn = v[start] > 0 ? sum1Turn : !sum1Turn;
//         }
//         else if (v[start] < v[end] && sum1Turn)
//         {
//             cout << v[end] << "c ";
//             sum1 += v[end];
//             end--;
//             sum1Turn = v[end] > 0 ? sum1Turn : !sum1Turn;
//         }
//         else if (v[start] < v[end] && !sum1Turn)
//         {
//             cout << v[end] << "d ";
//             sum2 += v[end];
//             end--;
//             sum1Turn = v[end] > 0 ? sum1Turn : !sum1Turn;
//         }
//     }
//     cout << abs(sum1 - sum2);
//     return 0;
// }
  
#include<bits/stdc++.h>
using namespace std;
#define LL long long int

double polygonArea(vector<pair<double,double>> x, int n)
{
    double area = 0.0;
  
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (x[j].first + x[i].first) * (x[j].second - x[i].second);
        j = i;  
    }
  
    return abs(area / 2.0);
}
  
int main()
{
    LL n,ans=2;
    cin>>n;
    vector<pair<double,double>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    // for(int i=1;i<n-1;i++)
    // {
    //     LL dy=arr[i].second-arr[i-1].second;
    //     LL dx=arr[i].first-arr[i-1].first;
    //     LL ny=arr[i+1].second-arr[i].second;
    //     LL nx=arr[i+1].first-arr[i].first;
    //     if(dy*nx!=dx*ny) ans++;
    // }



    cout<<polygonArea(arr,n);
    return 0;
}