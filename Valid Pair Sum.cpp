class Solution
{
  public:
    long long ValidPair(int a[], int n) 
    { 
       sort(a,a+n);
       long long i=0,j=n-1,ans=0;
       while(i<j)
       {
         if(a[j]+a[i]>0)
         {
           ans+=(j-i);
           j--;
         }
         else 
           i++;
      }
      return ans;
    }   
};
