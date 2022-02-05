class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1001][1001];
    int recur(int w,int i,int wt[],int val[],int n)
    {
        if(i==n)
           return 0;
        if(dp[i][w]!=-1)
            return dp[i][w];
        if(wt[i]>w)
           return dp[i][w]=recur(w,i+1,wt,val,n);
        int sum1=val[i]+recur(w-wt[i],i+1,wt,val,n);
        int sum2=recur(w,i+1,wt,val,n);
        return dp[i][w]=max(sum1,sum2);
        
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        for(int i=0;i<n;i++)
           for(int j=1;j<=w;j++)
              dp[i][j]=-1;
        int res=recur(w,0,wt,val,n);
    }
};
