vector<int> findTriplet(int arr[], int n)
{
   vector<int> result;
   sort(arr,arr+n);
   for(int i=n-1; i>=2 ; i--)
    {
        int j=0, k=i-1;
        while(j<k)
         {
             if(arr[j]+arr[k]==arr[i])
              {
                  result.push_back(arr[i]);
                  result.push_back(arr[j]);
                  result.push_back(arr[k]);
                  return result;
              }
              else if(arr[j]+arr[k]>arr[i]) 
                  k--;
              else 
                  j++;
         }
    }
    return result;
}
