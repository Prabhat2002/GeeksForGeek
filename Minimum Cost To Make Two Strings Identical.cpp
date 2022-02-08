int dp[1001][1001];
    int recur(string s1,string s2,int i ,int j)
    {
        if(i==s1.length() || j==s2.length())
          return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
          return 1+recur(s1,s2,i+1,j+1);
        int ans1=recur(s1,s2,i+1,j);
        int ans2=recur(s1,s2,i,j+1);
        return dp[i][j]=max(ans1,ans2);
    }
	public:
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    for(int i=0;i<X.length();i++)
	        for(int j=0;j<Y.length();j++)
	            dp[i][j]=-1;
	    int res=recur(X,Y,0,0);
	    long long int x=(X.length()-res)*costX;
	    long long int y=(Y.length()-res)*costY;
	    return x+y;
	}
