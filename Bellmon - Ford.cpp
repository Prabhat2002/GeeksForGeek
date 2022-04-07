
METHOD : 1


class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
       vector<int>dist(V,1e8);
       dist[S]=0;
       for(int i=0;i<V;i++)
       {
           for(auto &v:adj)
           {
               int x=v[0];
               int y=v[1];
               int wt=v[2];
               if(dist[y]>dist[x]+wt)
               {
                   dist[y]=dist[x]+wt;
               }
           }
       }
       return dist;
    }
};


METHOD : 2


class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
       vector<int>dist(V,1e8);
       dist[S]=0;
       bool change;
       for(int i=0;i<V;i++)
       {
           change=0;
           for(auto &v:adj)
           {
               int x=v[0];
               int y=v[1];
               int wt=v[2];
               if(dist[x]!=1e8 && dist[y]>dist[x]+wt)
               {
                   dist[y]=dist[x]+wt;
                   change=1;
               }
           }
           if(!change)
             break;
       }
       return dist;
    }
};
