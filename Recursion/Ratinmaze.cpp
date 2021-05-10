#include<bits/stdc++.h>
using namespace std;

char maze[10][10] = {"00X0","00X0","00X0","0000"};

bool ratintheMaze(char maze[10][10], int sol[][10], int i, int j, int m, int n)
{
 if(i==m && j==n){
     sol[m][n]==1;
     
     for (int i = 0; i <=m; i++)
     {
         for (int j = 0; j <=n; j++)
         {
             cout<<sol[i][j]<<",";
         }
         cout<<endl;
     }cout<<endl;
     return true;
 
 }
if(i>m || j>n){
     return false;
}
if(maze[i][j]=='X'){
    return false;
}



sol[i][j]=1;

bool rightPath = ratintheMaze(maze,sol,i,j+1,m,n);
bool downPath = ratintheMaze(maze,sol,i+1,j,m,n);



sol[i][j]=0;

if(rightPath || downPath){
    return true;
}




return false;
}
int main()
{
 int sol[10][10]={0};
 int m,n,i,j;

m=3,n=3,i=0,j=0;
bool ans = ratintheMaze(maze,sol,i,j,m,n);

if(ans==false){
    cout<<-1;
}
 return 0;
}