class Solution
{
    public:
    int dp[501][501];
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};
    bool dfs(int a, int b, int x, int y, int n, vector<vector<int>> &grid)
    {
        if (a==x and b==y)
            return true;
        if (!grid[a][b])
            return false;
        if (dp[a][b]!=-1)
            return dp[a][b];
        int &ans = dp[a][b] = 0;
        for (int i = 0; i < 4; i++)
        {
            int u = a + dx[i];
            int v = b + dy[i];
            if (u < 0 or v < 0 or u >= n or v >= n)
                continue;
            ans=ans|dfs(u, v, x, y, n, grid);
        }
        return ans;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int a, b, x, y, n = grid.size();
        vector<vector<bool>> vis(n, vector<bool>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                dp[i][j]=-1;
                if (grid[i][j])
                {
                    if(grid[i][j]==1)
                        a=i,b=j;
                    if(grid[i][j]==2)
                        x=i,y=j;
                }
            }
        return dfs(a, b, x, y, n, grid);
    }
};
