#include<bits/stdc++.h>
#include<list>
#include<iostream>

using namespace std;

struct myHash{
int bucket;  //hashing variable
list<int> table;


void display(){

//    list <int> :: iterator it; 
//     for(it = table.begin(); it != table.end(); ++it) 
//         cout << '\t' << *it; 
//     cout << '\n'; 
for(auto i=table.begin() ; i!=table.end(); i++){
    cout<<*i<<"  ";
}
}
int hash(int a)
{
   return a%bucket;
}

bool search(int key){
    int i=hash(key);
        for(auto it : table){
        if(it==key){
         return true;
            } 
    }
return false;
}

void insrt(int key){

auto i = hash(key);

table.insert(i,key);
}

void del(int key){
int i= hash(key);
table[i].remove(key);
}

};

int main()
{
struct myHash a;

cin>>a.bucket;
int n,key;
cout<< "\n1. insert ";
cout<< "\n2. SEARCH ";
cout<< "\n3. Delete ";
cin>>n;
while(n<=3&&n>=1){
switch(n){
case 1 : cout<<"Enter Key"; cin>>key; a.insrt(key); break;
case 2 :cout<<"Enter Key"; cin>>key; a.search(key); break;
case 3 :cout<<"Enter Key"; cin>>key; a.del(key); break;
}

}
    return 0;
}




