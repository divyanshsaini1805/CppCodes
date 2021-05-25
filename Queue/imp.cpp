#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
private:
T *arr;
int ms,cs,f,r;

public:
Queue(int ds=4){
    ms=ds;
    cs=0;
    f=0;
    r=ms-1;
    arr = new T[ms];
}

bool isFull(){
    return ms==cs;
}
bool isEmpty(){
    return cs==0;
}

void push(T data){
    if(!isFull()){
        r=(r+1)%ms;
        arr[r]=data;
        cs++;    
    }
}

void top(){
    cout<<arr[r];
    cs--;
}
void pop(){
    if(!isEmpty()){
        f=(f+1)%ms;
        cs--;
    }
}

T get_front(){
    return arr[f];
} 

};
int main()
{

Queue<char> s(10);

for(int i = 65; i<70; i++){
    s.push(i);
}

while(!s.isEmpty()){
    cout<<s.get_front()<<endl;
    s.pop();
}
 
 return 0;
}