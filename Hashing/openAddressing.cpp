#include<bits/stdc++.h>

using namespace std;

struct myhash{
    int arr[1000];
    int cap,size;

void display(int size){
   for(int i=0;i<size;i++){
       cout<<"arr[i]"<<" ";
   }

}

// myHash(int c){
//  cap=c;
//  size=0;

//  for(int i=0;i<cap;i++){
//      arr[i]=-1;
//  }
// }

int hash(int key){
return key%cap;
}


bool search(int key){
    int h= hash(key);

int i = h;

while(i!=-1){
if(arr[i]==h){
    return true;
}
i = (i+1)%cap;
 if(i==size){
     return false;
 }
}
return false;
}
bool insert(int key){

if(size==cap){
    return false;
}

int i = hash(key);

while(i!=-1 && i!=-2 && arr[i] != key ) i = (i+1)%cap;


if(arr[i]==key){
    cout<<"Alrrady Present";
    return false;
}
else
{
    arr[i]= key;
    size++;
    return true;
}
}

bool erase(int key){
 
 int h = hash(key);
 int i = h;

 while(i!=-1){
     if(arr[i]==key){
         arr[i]=-2;
         return true;
     }

    i=(i+1)%cap;
if(i==h)
return false;
}
return false;
}
}myHash;

int main(){
cin>>myHash.cap;
int key,n;
cin>>n;
char ans = 'y';
while(ans=='y'){
switch(n){
    case 1 :{ cin>>key;
    cout<<"Insert"; 
    if(myHash.insert(key)==0){
        cout<<"Inserted";
        }
        break;
    }
    case 2 :{ cin>>key;
    // cout<<"Delete"; 
    if(myHash.erase(key)==0){
        cout<<"deleted";
        }
        break;
    }
    case 3 : {cin>>key;
    cout<<"Search"; 
    if(myHash.search(key)==0){
        cout<<"Searched";
        }
        break;
    }
    case 4 : {cin>>key;
    cout<<"Display"; 
    myHash.display(myHash.size);
        break;
        }
}
cout<<"Y/N";
cin>>ans;
}

return 0;
}