class Solution
{
	public:
	int find(int i,vector<int>&parent)
     {
        if(parent[i]==-1)
           return i;
        return parent[i]=find(parent[i],parent);
     }
     void union_(int i,int j,vector<int>&rank,vector<int>&parent)
     {
        i=find(i,parent);
        j=find(j,parent);
       if(i!=j)
       {
        if(rank[i]<rank[j])
        {
            parent[i]=j;
            rank[j]=rank[j]+rank[i];
        }
        else
        {
            parent[j]=i;
            rank[i]=rank[i]+rank[j];
        }
       }
      }
    int spanningTree(int V, vector<vector<int>> adj[])
    {
    int ans=0;
    vector<int>rank(V,1);
    vector<int>parent(V,-1);
    queue<pair<int,int>>q;
    q.push({0,0});
    vector<vector<int>>nums;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            int x=adj[i][j][0];
            int wt=adj[i][j][1];
            nums.push_back({wt,i,x});
        }
    }
    sort(nums.begin(),nums.end());
     for(auto x:nums)
     {
        int wt=x[0];
        int i=x[1];
        int j=x[2];
        int s1=find(i,parent);
        int s2=find(j,parent);
        if(s1!=s2)
        {
          union_(i,j,rank,parent);
          ans=ans+wt;
        }
      }
      return ans;
    }
};
