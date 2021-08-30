#include<bits/stdc++.h>

using namespace std;


//Always using a 0 to m graph
//N = number of edges
//m = number of vertices




class graph_bellmanFord{
    public:

    int u;
    int v;
    int wt;

    graph_bellmanFord(int first, int second, int third){
        u = first;
        v = second;
        wt = third;
    }
};
int main(){
vector<graph_bellmanFord> edges;
int u,v,wt;
int N,m;
cin>>N>>m;

for(int i =0; i < m; i++){
    cin>>u>>v>>wt;
    edges.push_back(graph_bellmanFord(u,v,wt));
}
 

int src;
cout<<endl<<"source  ";
cin>>src;

int INF = 100000;

vector<int> dist(N,INF);
dist[src]=0;
for(int i = 1; i<=N-1; i++){
    for(auto edge : edges){
        if((dist[edge.u] + edge.wt) < dist[edge.v]){
             dist[edge.v]=dist[edge.u] + edge.wt;
        }

    }
}

bool change = false;

for(auto edge: edges){
      if((dist[edge.u] + edge.wt) < dist[edge.v]) {
      change = true;
        cout<<"Negative Cycle";
        break;    
    }
}


if(!change){
    for(int i=0; i<N; i++){
        cout<<dist[i]<<"  ";
    }
}


}