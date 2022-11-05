class Solution 
{
  public:
    int maxGroupSize(int arr[], int N, int K) {
        vector<int>dp(K);
        for(int i=0;i<N;i++)
            dp[arr[i]%K]++;
        int i=1,j=K-1,ans=0;
        while(i<j)
        {
            ans=ans+max(dp[i],dp[j]);
            i++;
            j--;
        }
        if(i==j && dp[i])
            ans++;
        if(dp[0])
            ans++;
        return ans;
    }
};
