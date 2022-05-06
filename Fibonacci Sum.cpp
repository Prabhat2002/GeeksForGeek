long long int fibSum(long long int n)
    {
        long long mod=1000000007;
        if(n==1)
           return 1;
        vector<long long>dp(n);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n;i++)
           dp[i]=(dp[i-1]+dp[i-2])%mod;
        long long int ans=0;
        for(int i=0;i<n;i++)
          ans=(ans%mod+dp[i])%mod;
       return ans;
    }
