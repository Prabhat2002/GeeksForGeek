class Solution
{
  public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        int ans=INT_MAX,sum=0,j=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            while(sum>x)
            {
               ans=min(ans,i+1-j);
               sum=sum-arr[j];
               j++;
            }
        }
        return ans;
    }
};
