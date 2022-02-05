class Solution{
public:
    int dp[1001][1001];
    int recur(int w,int i,int wt[],int val[],int n)
    {
        if(i==n)
           return 0;
        if(dp[i][w]!=-1)
            return dp[i][w];
        if(wt[i]>w)
           return dp[i][w]=recur(w,i+1,wt,val,n);
        // int sum1=val[i]+recur(w-wt[i],i+1,wt,val,n);
        int sum2=val[i]+recur(w-wt[i],i,wt,val,n);
        int sum3=recur(w,i+1,wt,val,n);
        return dp[i][w]=max(sum3,sum2);
    } 
    int knapSack(int n, int w, int val[], int wt[])
    {
        for(int i=0;i<n;i++)
           for(int j=1;j<=w;j++)
              dp[i][j]=-1;
        int res=recur(w,0,wt,val,n);
        return res;
    }
};
