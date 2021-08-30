#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    public:

    map<T, list<T>> adjlist;

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

    void dfshelper(T src, map<T,bool> &visited){
        visited[src] = true;
        cout<<src<<" ";

        for(auto i:adjlist[src]){
            if(!visited[i]){
                dfshelper(i,visited);
            }
        }
    }

    void dfs(T src){
        int component = 1;
        map<T,bool> visited;
        dfshelper(src,visited);

        for(auto i:adjlist){
            T city = i.first;
            if(!visited[city]){
                dfshelper(city,visited);
                component++;
            }
        }
    cout<<endl<<"the given graph had  "<<component <<" components";
    }

};
 
 
int main(){

    // Graph1 g(3);
    Graph<int> g1;

    g1.insertNode(0,1);
    g1.insertNode(1,2);
    g1.insertNode(0,4);
    g1.insertNode(2,4);
    g1.insertNode(2,3);
    g1.insertNode(3,4);
    g1.insertNode(3,5);

    g1.dfs(4);

 return 0;
}


