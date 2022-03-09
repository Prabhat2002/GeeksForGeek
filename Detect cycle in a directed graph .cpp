class Solution 
{
  public:
    // Function to detect cycle in a directed graph.
   bool checkCycle(int i , vector<int>&vis , vector<int> adj[])
    {
        if(vis[i] == 1)
            return true;
        if(vis[i] == 0)
        {
            vis[i] = 1;
            for(auto it: adj[i])
                if(checkCycle(it , vis , adj))
                    return true;
        }
        // For a vertex having no connections
        vis[i]=100;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> vis(V , 0);
        for(int i = 0; i < V; i++)
        {
            if(vis[i] == 0)
            {
                if(checkCycle(i,vis,adj))
                   return true;
            }
        }
        return false;
    }
};
