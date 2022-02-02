class Solution
{
    public:
    long long soln(int n,int k)
    {
        if(n==1)
           return 0;
        int ans=soln(n-1,k);
        return (ans+k)%n;
    }
    int josephus(int n, int k)
    {
        return soln(n,k)+1;
    }
};
