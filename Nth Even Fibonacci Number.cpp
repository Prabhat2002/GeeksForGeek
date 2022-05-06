    long long int nthEvenFibonacci(long long int n) 
    {
        int mod=1000000007;
        vector<long long>dp;
        dp.push_back(1);
        dp.push_back(1);
        for(long long i=2;i<3*n;++i)
            dp.push_back((dp[i-1]+dp[i-2])%mod);
        return dp.back();
    }
