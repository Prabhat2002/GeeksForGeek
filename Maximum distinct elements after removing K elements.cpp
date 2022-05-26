class Solution
{
  public:
    int maxDistinctNum(int arr[], int n, int k)
    {
      priority_queue<int>pq;
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++)
          mp[arr[i]]++;
      for(auto i: mp)
        pq.push(i.second);
      while(k--)
      {
        int top = pq.top();
        top--;
        pq.pop();
        if(top==0)
         continue;
        else
         pq.push(top);
      }
     return pq.size();
    }
};
