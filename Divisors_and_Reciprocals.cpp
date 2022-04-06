#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        long long int x,a,b;cin>>x>>a>>b;
        if(x%a==0)
        {
            long long int p=x/a;
            long long int temp=b*p;
            long long int sum=0;
            for(int i=1;i<=sqrtl(temp);i++)
            {
                if(sum>x)
                break;
                if(temp%i==0)
                {
                    sum=sum+i;
                    if(temp/i!=i)
                    sum=sum+temp/i;
                }
            }
            if(sum!=x)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<temp<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
}