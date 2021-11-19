#include<bits/stdc++.h>
using namespace std;


class Graph1{
    public:
    int v;
    list<int> *l;


    Graph1(int data){
        v=data;
        l = new list<int>[v];
        }


    void insertNode(int u ,int v, bool isbidir=true){
        
        l[u].push_back(v);
        if(isbidir){
        l[v].push_back(u);
        }
    }


    void print(){

        for(int i=0; i<v; i++){
            cout<<i<<" -> ";

            for(int vertex: l[i]){
                cout<<vertex<<",";
            }
            cout<<endl;
        }
    }
};

template<typename T>
class Graph{
    public:

    map<T, list<T>> adjlist;

    Graph(){

    }
    void insertNode(T u ,T v, bool isbidir=true){
        
        adjlist[u].push_back(v);
        if(isbidir){
        adjlist[v].push_back(u);
        }
    }


    void print(){

        for(auto i:adjlist){
            cout<<i.first<<" -> ";

            for(auto vertex: i.second){
                cout<<vertex<<",";
            }
            cout<<endl;
        }
    }

    void bfs(T v){
        map<T, bool> visited;
        queue<T> q;

        q.push(v);
        visited[v] = true;
        while(!q.empty()){

            T temp = q.front();
            q.pop();
            cout<<temp<<" ";

            for(auto neighbour: adjlist[temp]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

    void shortestPath_usingbfs(T src){
        
    }

};
 
 
int main(){

    Graph1 g(3);
    Graph<string> g1;

    // g1.insertNode("Modi","Putin");
    // g1.insertNode("Obama","Putin");
    // g1.insertNode("Trump","Obama",false);
    // g1.insertNode("Modi","Obama");
    // g1.insertNode("Modi","Trump",false);

    // g1.bfs("Modi");
    int n=5;
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j=j+i)
        {
            arr[j]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

 return 0;
}


