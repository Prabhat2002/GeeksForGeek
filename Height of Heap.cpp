class Solution
{
  public:
    int heapHeight(int n, int arr[])
    {
         if(n<=2)
            return 1;
         return log2(n); 
    }
};
