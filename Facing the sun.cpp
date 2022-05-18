class Solution
{
 public:	
	int countBuildings(int h[], int n) 
	{
	    int ans=0;
	    int val=0;
	    for(int i=0;i<n;i++)
	    {
	        int prev=val;
	        val=max(val,h[i]);
	        if(val>prev)
	           ans++;
	    }
	    return ans;
	}
};
