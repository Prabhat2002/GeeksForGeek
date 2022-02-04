class Solution
{
    public:
    long long int dp[10001];
    int recur(int i,int *v,int n)
    {
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans1=v[i]+recur(i+2,v,n);
        int ans2=recur(i+1,v,n);
        return dp[i]=max(ans1,ans2);
    }
    int FindMaxSum(int arr[], int n)
    {
        for(int i=0;i<10001;i++)
            dp[i]=-1;
        long long int res=recur(0,arr,n);
        return res;
    }
};
