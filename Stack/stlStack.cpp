#include<bits/stdc++.h>
using namespace std;

class Stack1{
private:
stack<int> v;
public:
void push(int data){
    v.push(data);
}

bool empty(){
    return v.size()==0;
}
void pop(){
    if(!empty()){
    v.pop();
}
S
}
int top(){
    return v.top();
} 
};
int main()
{

Stack1 s;

for(int i = 0; i<10; i++){
    s.push(1<<i);
}

while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
 
 return 0;
}