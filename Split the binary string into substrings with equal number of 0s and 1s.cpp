int maxSubStr(string str)
    {
        int n=str.length();
        vector<int>dp(n,0);
        int one=0,zero=0;
        int n0=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
              n0++;
        }
        int n1=n-n0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
              one++;
            else 
              zero++;
            if(zero==one && n0-zero== n1-one)
               dp[i]=1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
          ans=ans+dp[i];
        return ans==0?-1:ans;
    }
