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

    bool dfs(int src, int par, vector<bool> &visited)
    {

        visited[src] = true;

        for (auto i : adjlist[src])
        {
            if (!visited[i])
            {
                if (dfs(i, src, visited))
                    return true;
            }
            else if (i != par)
                return true;
        }
        return false;
    }

    bool isCycle(int n)
    {
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, -1, visited))
                    return true;
            }
        }
        return false;
    }
};

int main()
{

    graph g;

    g.insertNode(0, 1);
    g.insertNode(1, 2);
    g.insertNode(2, 3);
    //g.insertNode(3,1);

    if (g.isCycle(10))
    {
        cout << " Cyclic Graph";
    }
    else
        cout << "Acyclic Graph";
}
