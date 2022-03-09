class Solution 
{
  public:
    // Function to return a list containing the DFS traversal of the graph.
     void  calldfs(vector<bool>&vis,vector<int> adj[],int i,vector<int>&res)
      {
          vis[i]=1;
          for(auto x:adj[i])
          {
              if(vis[x]==0)
              {
                 res.push_back(x);
                 calldfs(vis,adj,x,res);
              }  
          }
      }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) 
    {
         vector<bool>vis(v,0); 
         vector<int>res;
         for(int i=0;i<v;i++)
         {
             if(vis[i]==0)
             {
                 res.push_back(i);
                 calldfs(vis,adj,i,res);
             }
         }
        return res;
    }
};
