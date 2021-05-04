// #include<iostream>
// #include<vector>
#include <bits/stdc++.h> 

using namespace std;

int main(int argc, char const *argv[])
{
    
vector<int> arr(5,20);

arr.push_back(10);


vector<int>::iterator it = arr.begin();
cout<< *(it);
// cin>>arr;

list<int> list1;

list<int>::iterator it = list1.begin();

//list1.insert(it,5);


    return 0;
}
