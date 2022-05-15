int* greaterElement(int arr[], int n)
{
   set<int>s;
   vector< int>ans;
   for(int i=0;i<n;i++)
   s.insert(arr[i]);
   for(int i=0;i<n;i++)
   {
       auto it=s.upper_bound(arr[i]);
       if(it!=s.end())
          ans.push_back(*it);
       else
          ans.push_back(-10000000);
       
   }
   for(int i=0;i<n;i++)
      arr[i]=ans[i];
   return arr;
}
