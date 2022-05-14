class Solution 
{
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) 
    {
        int p1=-1,p2=-1;
        int i=0,j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]==x)
            {
                p1=mid;
                j=mid-1;
            }
            else if(arr[mid]<x)
                i=mid+1;
            else
               j=mid-1;
        }
        i=0,j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]==x)
            {
                p2=mid;
                i=mid+1;
            }
            else if(arr[mid]<x)
                i=mid+1;
            else
               j=mid-1;
        }
        if(p1==-1 || p2==-1)
           return {-1};
        return {p1,p2};
    }
};
