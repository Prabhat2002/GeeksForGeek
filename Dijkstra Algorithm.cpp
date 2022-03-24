class Solution
{
	public:
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
    {
       priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;
       vector<int>dist(n,INT_MAX);
       dist[S]=0;
       pq.push({0,S});
       while(!pq.empty())
       {
          int distance=pq.top().first;
          int prev=pq.top().second;
          pq.pop();
          for(auto i : adj[prev])
          {
              int next=i[0];
              int nextDist=i[1];
              if(dist[next]>(dist[prev]+nextDist))
              {
                 dist[next]=dist[prev]+nextDist;
                 pq.push({dist[next],next});
              }
          }
       }
       return dist;
    }
};
