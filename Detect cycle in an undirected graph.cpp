class Solution 
{
  public:
    // Function to detect cycle in an undirected graph.
    bool cycle(int i,vector<int>&vis, vector<int>adj[],int node)
    {
            vis[i] = 1;
            for(auto it: adj[i])
            {   
                if(vis[it]==0)
                {
                   if(cycle(it , vis , adj,i))
                      return 1;
                }
                else if(it!=node)
                    return 1;
            }
        return 0;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
         vector<int>vis(V,0);
         for(int i=0;i<V;i++)
         {
             if(vis[i]==0)
             {
                 if(cycle(i,vis,adj,-1))
                    return 1;
             }
         }
         return 0;
    }
};
