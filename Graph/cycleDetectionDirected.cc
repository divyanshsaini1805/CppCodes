#include <bits/stdc++.h>
using namespace std;
// int n=10;
class graph
{
public:
    vector<int> adjlist[10];

    void insertNode(int u, int v, bool isbidir = true)
    {

        adjlist[u].push_back(v);
        if (isbidir)
        {
            adjlist[v].push_back(u);
        }
    }

    bool dfs(int src, vector<int> &visited, vector<int> &dfs_visited){
	    
	    visited[src] = 1;
	    dfs_visited[src] = 1;
	    
	    for(auto i: adjlist[src]){
	        if(!visited[i]){
	            if(dfs(i,visited,dfs_visited)) return true;
	        }else
	        if(dfs_visited[i]){
	            return true;
	        }
	    }
	    dfs_visited[src]=0;
	    return false;
	}
	
	bool isCyclic(int V) 
	{
	   	vector<int> visited(V,0);
	   	vector<int> dfs_visited(V,0);
	   //	memset(visited, 0, sizeof visited);
	   //	memset(dfs_visited, 0, sizeof dfs_visited);
	   	for(int i=0; i< V; i++){
	   	    if(!visited[i]){
	   	        if(dfs(i,visited,dfs_visited)) return true;
	   	    }
	   	}
	   	return false;
	}

};

int main()
{

    graph g;

    g.insertNode(0, 1, false);
    g.insertNode(1, 2, false);
    g.insertNode(2, 3, false);
    // g.insertNode(3,1);

    if (g.isCyclic(10))
    {
        cout << " Cyclic Graph";
    }
    else
        cout << "Acyclic Graph";
}
