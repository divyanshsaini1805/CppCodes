#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack1{
private:
vector<T> v;
public:
void push(T data){
    v.push_back(data);
}

bool empty(){
    return v.size()==0;
    
}
void pop(){
    if(!empty()){
    v.pop_back();
}
}
T top(){
    return v[v.size()-1];
} 
};

void transfer(stack<int>& a,stack<int>& b, int n){
for (int i = 0; i < n; i++)
{
b.push(a.top());
a.pop();
}
}

void reverse_usingOneStack(stack<int>& a){
stack<int> b;
int n = a.size();

for (int i = 0; i < n; i++)
{
int var = a.top();
a.pop();
transfer(a,b,n-i-1);
a.push(var);
transfer(b,a,n-i-1);
}
}

void insertAtBottom(stack<int>& s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int y=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(y);
}
void reverseStackUsingRecursion(stack<int>& s){
    if(s.empty()){
        return;
    }
    int x= s.top();
    s.pop();
    reverseStackUsingRecursion(s);
    insertAtBottom(s,x);
}

int main()
{

Stack1<int> s;
stack<int> a;
a.push(10);
a.push(20);
a.push(30);
a.push(40);

for(int i = 65; i<70; i++){
    s.push(i);
}

// while(a.empty()== false){
//     cout<<a.top()<<endl;
//     a.pop();
// }

reverseStackUsingRecursion(a);
cout<<endl;
while(a.empty()==false){
    cout<<a.top()<<endl;
    a.pop();
}

return 0;
}