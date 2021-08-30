#include <bits/stdc++.h>
using namespace std;

template<typename T>
class graph
{
public:
    map<T, list<T>> adjlist;

    void insertNode(T u, T v, bool isbidir = true)
    {

        adjlist[u].push_back(v);
        if (isbidir)
        {
            adjlist[v].push_back(u);
        }
    }

    bool directedUsindBFS(T src)
    {

        map<T, bool> visited;
        map<T, int> parent;
        queue<T> q;

        q.push(src);
        visited[src] = true;
        parent[src] = src;

        while (!q.empty())
        {

            T node = q.front();
            q.pop();

            for (T neighbour : adjlist[node])
            {
                if (visited[neighbour] == true && neighbour != parent[node])
                {
                    return true;
                }
                else if (visited[neighbour] != true)
                {
                    visited[neighbour] = true;
                    parent[neighbour] = node;
                    q.push(neighbour);
                }
            }
        }
        return false;
    }
    
};
int main()
{
    graph<int> g;

    g.insertNode(0,1);
    g.insertNode(0,2);
    // g.insertNode(1,2);
    g.insertNode(2,3);

    if(g.directedUsindBFS(0)){
        cout<<"Cyclic Graph";
    }else{
        cout<<"Acyclic Graph";
    }
    }