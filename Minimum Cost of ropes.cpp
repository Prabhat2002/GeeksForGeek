class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) 
    {
       priority_queue<long long int, vector<long long int>, greater<long long int>> pq(arr,arr+n);
       long long int cost = 0;
       while(pq.size()>1)
       {
           long long int x = pq.top();
           pq.pop();
           long long int y = pq.top();
           pq.pop();
           long long int sum = x + y;
           pq.push(sum);
           cost += sum;
       }
       return cost;
    }
};
