#include <iostream>
using namespace std;

int intersection(int a[], int b[], int n, int m)
{int count = 0, z = 0;

   
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(a[i]==b[j]){
            count++;
        }

    }
    
}
return count;
}

void input(int a[10], int n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
}
int main()
{
    int a[100], b[100], n, m;
    cin >> n;
    input(a, n);
    cout<<"===========================\n";
    cin>>m;
    input(b, m);
    // rint(a, n);
   int z = n + m - intersection(a, b, n, m);
    cout << "\n"<< z;
    // print(a, n);
    return 0;
}