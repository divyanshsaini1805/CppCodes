#include<bits/stdc++.h>
using namespace std;


class solution{

    public:


    vector<int> dfscalling(int N, vector<int> adj[]){

        vector<int> vis(N,0);
        stack<int> s;

        for(int i=0; i<N; i++){
            if(vis[i]==0){
                toposort(i,adj,vis,s);
            }
       }
       vector<int> ans;
       while(!s.empty()){
           ans.push_back(s.top());
           s.pop();
       }
    return ans;
    }



    void toposort(int src, vector<int> adj[], vector<int>&vis, stack<int>&s){

        vis[src]=1;

        for(auto i : adj[src]){
            if(vis[i]==0){
            toposort(i, adj, vis, s);
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

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    solution s;
    vector<int> ans = s.dfscalling(V,adj);
    for(auto i : ans){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout << check(V, ans, adj) << endl;
}