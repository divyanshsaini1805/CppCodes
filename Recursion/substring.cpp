#include<iostream>
#include<cstring>
#include<string.h>


using namespace std;

void substring(string str, string curr="",int index=0)
{
 if(index == str.length()){
     cout<<curr<<" ";
     return;
 }
 substring(str, curr, index+1);
 substring(str, curr+str[index],index+1);
}

void substring2(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out[j]<<" ";
        return;
    }
 out[j]=in[i];
 substring2(in,out,i+1,j+1);
 substring2(in,out,i+1,j);
 }
int main()
{
string str;
char a[100];char b[100];
int index = str.length();
cin>>str;
gets(a);
substring(str);
substring2(a,b,0,0);
    return 0;
}
