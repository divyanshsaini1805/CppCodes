#include<bits/stdc++.h>
using namespace std;


class solution{

    public:


    vector<int> ShortestPathinDAG(int src, int N, vector<pair<int,int>> adj[]){

        vector<int> vis(N,0);
        stack<int> s;

        for(int i=0; i<N; i++){
            if(vis[i]==0){
                toposort(i,adj,vis,s);
            }
       }
        int INF = 1e9;
       vector<int>dist(N,INF);

       dist[src] = 0;

       vector<int> ans;
       while(!s.empty()){
           int temp = s.top();

           if(temp!=INF){

               for(auto i : adj[temp]){
                   if(dist[temp] + i.second < dist[i.first]){
                       dist[i.first] = dist[temp] + i.second;
                   }
               }

           }

        for(int i=0;i<N;i++){
            (i==INF)? cout<<"INF" : cout<<dist[i]<<" ";
        }
       }
    return ans;
    }



    void toposort(int src, vector<pair<int,int>> adj[], vector<int>&vis, stack<int>&s){

        vis[src]=1;

        for(auto i : adj[src]){
            if(vis[i.first]==0){
            toposort(i.first, adj, vis, s);
            }
        }
    s.push(src);
    }


};

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main(){
  
    	int V, E;
    	cin >> V >> E;

    	vector<pair<int,int>> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v,w;
    		cin >> u >> v >> w;
    		adj[u].push_back(make_pair(v,w));
    	}

    solution s;



}

