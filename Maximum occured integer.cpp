class Solution
{
   public:
    int maxOccured(int L[], int R[], int n, int maxx)
    {
        int res[maxx+1] ={0};
        int ans=INT_MIN;
        int idx=0;
        for(int i=0;i<n;i++)
        {
            int counter = L[i];
            while(counter<=R[i])
            {
               res[counter]++;
               counter++;
            }
        }
        
        for(int i=0; i<=maxx;i++)
        {
            if(ans<res[i])
            {
                ans=res[i];
                idx = i;
            }
        }
        return idx;
    }
};
