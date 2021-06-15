#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
 stack<int> s;
 int ans[100] ={};
 int span,betterday;

 for(int day=0;day<n;day++){
     int currPrice = arr[day];
     if(!s.empty() && s.top() < currPrice ){
         s.pop();
     }
     betterday = s.empty() ? 0 : s.top();
     span = day - betterday;
     ans[day] = span;
     s.push(day);
 }
 for (int i = 0; i < n; i++)
 {
     cout<<ans[i]<<" ";
 }
 
}
int main()
{
int arr[10] = { 100,80, 60 ,70,60,75,85};
int n=7;
solve(arr,n);
return 0;
}