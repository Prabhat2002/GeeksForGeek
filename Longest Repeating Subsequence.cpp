class Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		     string s1=str;
		  //   reverse(str.begin(),str.end());
		     string s2=str;
		     int x=s1.length();
		     int y=s2.length();
		     int dp[x+1][y+1];
		     for(int i=0;i<=x;i++)
		     {
		         for(int j=0;j<=y;j++)
		         {
		             if(i==0 || j==0)
		               dp[i][j]=0;
		         }
		     }
		     for(int i=1;i<=x;i++)
		     {
		         for(int j=1;j<=y;j++)
		         {
		             if(s1[i-1]==s2[j-1] && (i!=j))
		                 dp[i][j]=1+dp[i-1][j-1];
		             else
		                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		         }
		     }
		     return dp[x][y];
		}
};
