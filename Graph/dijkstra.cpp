#include <bits/stdc++.h>

using namespace std;

class graph
{
public:
    //vector<int> adj[10];
    unordered_map<int, list<pair<int, int>>> m;
    // set<pair<int,int>> pq;
    void insert_edge(int u, int v, int dist, bool isbir = true)
    {

        m[u].push_back(make_pair(v, dist));
        if (isbir)
        {
            m[v].push_back(make_pair(u, dist));
        }
    }

    void print_list()
    {

        for (auto i : m)
        {
            cout << i.first << "->";

            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }

    void dijkstraSSSP(int src)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_map<int, int> dist;

        for (auto i : m)
        {
            dist[i.first] = INT_MAX;
        }

        //First is distance as set sorts according to first parameter
        set<pair<int, int>> s;

        dist[src] = 0;
        s.insert(make_pair(0, src));

        while (!s.empty())
        {
            auto given_pair = *(s.begin());

            int node = given_pair.second;

            int child_dist = given_pair.first;

            s.erase(given_pair);

            for (auto childPair : m[node])
            {

                if (dist[childPair.first] > child_dist + childPair.second)
                { //dist[node]

                    //updation is not possible
                    //remove and insert

                    int dest = childPair.first;
                    auto t = s.find(make_pair(dist[dest], dest));
                    if (t != s.end())
                    {
                        s.erase(t);
                    }

                    dist[dest] = child_dist + childPair.second;
                    s.insert(make_pair(dist[dest], dest));
                }
            }
        }
        //print
        for (auto distance : dist)
        {
            cout << distance.first << " is located at " << distance.second << endl;
        }
    }
};

int main()
{

    // Graph1 g(3);
    graph g1;

    g1.insert_edge(0, 1, 1);
    g1.insert_edge(1, 2, 3);
    g1.insert_edge(0, 4, 4);
    g1.insert_edge(2, 4, 2);
    g1.insert_edge(2, 3, 6);
    g1.insert_edge(3, 4, 4);
    g1.insert_edge(3, 5, 8);

    // g1.print_list();
    g1.dijkstraSSSP(0);

    return 0;
}
