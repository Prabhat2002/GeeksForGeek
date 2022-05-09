long long int calculate(int a[], int n)
{
    sort(a,a+n);
    long long int count=1,sum=0;
    for(int i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1])
       count++;
      else
      {
          sum+=(count-1)*count/2;
          count=1;
      }
    }
    sum+=(count-1)*count/2;
    return sum;
}
