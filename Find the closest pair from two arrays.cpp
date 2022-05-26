class Solution
{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int target) 
    {
        sort(arr,arr+n);
        sort(brr,brr+m);
        int x,y;
        int i=0,j=m-1,diff=INT_MAX;
        while(i<n && j>=0)
        {
            int sum=arr[i]+brr[j];
            if(diff>abs(target-sum))
            {
                x=arr[i];
                y=brr[j];
                diff=abs(sum-target);
            }
            if(sum>=target)
                j--;
            else 
                i++;
        }
        return {x,y};
    }
};
