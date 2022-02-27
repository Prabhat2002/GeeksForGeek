class Solution 
{
  public:
    int bs(int arr[],int l,int h,int x)
    {
       while(l<=h)
       {
         int mid = (l+h)/2;
         if(arr[mid] == x)
             return mid;
         else if(arr[mid] > x)
             h = mid - 1;
         else
             l = mid + 1;
        }
    }
 
 
   string isKSortedArray(int arr[], int n, int k)
   {
       int aux[n];
       for(int i=0;i<n;i++)
           aux[i] = arr[i];
       sort(aux,aux+n);
       for(int i=0;i<n;i++)
       {
          int j = bs(aux,0,n-1,arr[i]);
          if(abs(i-j)>k)
              return "No";
       }
       return "Yes";
    }
};
