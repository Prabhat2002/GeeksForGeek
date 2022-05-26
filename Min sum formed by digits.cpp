class Solution
{
  public:
    long long int minSum(int arr[], int n)
    {
       long long odd=0,even=0;
       sort(arr,arr+n);
       int j=0;
       for(int i=0;i<n;i+=2)
       {
           j=i+1;
           if(i<n&&arr[i]>=0)
               odd=odd*10+arr[i];
           if(j<n&&arr[j]>=0)
               even=even*10+arr[j];
       }
       return odd+even;
    }
};
