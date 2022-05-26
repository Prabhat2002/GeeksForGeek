class Solution
{
  public:
    int minOperations(int arr[], int n, int k) 
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
           pq.push(arr[i]);
        if(pq.top()>=k)
           return n-pq.size();
        while(pq.size()>1)
        {
            if(pq.top()>=k)
               break;
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            pq.push(x+y);
            // cout<<pq.size();
        }
        return n-pq.size();
    }
};
