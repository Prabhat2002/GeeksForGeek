class Solution
{
    public:
        int dp[1000001];
        int recur(int n)
        {
            if(n<=1)
              return 0;
            int a=recur(n/2);
            int b=recur(n/3);
            int c=recur(n/4);
            if(a+b+c>n)
                return dp[n]=a+b+c;
            return dp[n]=n;    
        }
        int maxSum(int n)
        {
            for(int i=0;i<=n;i++)
               dp[i]=-1;
            int res=recur(n); 
            return res;
        }
};
