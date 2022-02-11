class Solution
{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        sort(A,A+N);
        long long int k1=K1<N?K1:N;
        long long int k2=K2<N?K2:N;
        long long int cost=0;
        for(long long int i=k1;i<k2-1;i++)
            cost+=A[i];
        return cost;    
    }
};
