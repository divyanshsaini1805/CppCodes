#include<stdio.h>
#include<conio.h>

struct EMP
{
    /* data */
    char name[50];
    char Roll[50];
    float Salary;
    float DA;
    float HRA;
    float Total;
};

void input(){
 struct EMP a[10];
  
 int i;
 printf("Please Enter the Details of the 10 EMPLOYEES \n");
 for(i=0;i<10;i++){
 printf("Please Enter Name  : ");
 scanf("%s",&a[i].name);
 printf("\nPlease Enter Roll  : ");
 scanf("%s",&a[i].Roll);
 printf("\nPlease Enter Salary  : ");
 scanf("%f",&a[i].Salary);
 
 a[i].DA = 0.35 * a[i].Salary;
 a[i].HRA = 0.15 * a[i].Salary;
 a[i].Total = a[i].Salary + a[i].HRA + a[i].DA;
 }

 }

void display(){
struct EMP a[10];
int i;
for(i=0;i<10;i++){
printf("Name    =   Roll    =   Salary  =   DA  =   HRA     =   Total Salary\n"); 
printf("%s      =   %s      =   %f      =   %f  =   %f      =   %f",a[i].name,a[i].Roll,a[i].Salary,a[i].DA,a[i].HRA,a[i].Total); 
}}


void main(){
struct EMP a[10];
input();
display();
getch();
}
// #include<iostream>
// using namespace std;

// struct chef{
// int n,num=0;
//   int N,K,D;
//   int setter[100000];
//   int result;

// };

// void Nchef(){
//   int n,num=0;

//    cin>>n;
// struct chef a[100];  
  
//   for(int i=0;i<n;i++){
//    cin>>a[i].N>>a[i].K>>a[i].D;
//    for(int j=0;j<a[i].N;j++){
//        cin>>a[i].setter[j];
//     num=num+a[i].setter[j];
//    }
  
//    if(n<num) 
//    {
//    a[i].result=0;
//    }
//    if((a[i].D*a[i].K)<=num){
//        a[i].result=a[i].D;
//    }else{
//        a[i].result=num/a[i].K;
//    }
//   }
 
//  for (int i = 0; i < n; i++)
//  {
//      cout<<a[i].result<<"\n";
//  }
 

// }

// int main()
// {
//     Nchef();
//     return 0;
// }
