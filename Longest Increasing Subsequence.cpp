class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int dp[100001];
    int recursion(int *a,int i,int prev,int n)
    {
        if(i==n)
          return 0;
        if(dp[prev+1]!=-1)
          return dp[prev+1];
        if(prev==-1 || a[prev]<a[i]) 
        {
            int ans1=1+recursion(a,i+1,i,n);
            int ans2=recursion(a,i+1,prev,n);
            return dp[prev+1]=max(ans1,ans2);
        }
        return dp[prev+1]=recursion(a,i+1,prev,n);
    }
    int longestSubsequence(int n, int a[])
    {
       for(int i=0;i<=n;i++)
         dp[i]=-1;
       int res=recursion(a,0,-1,n);
       return res;
    }
};
