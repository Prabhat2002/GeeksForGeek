class Solution{
    public:
   
    long long power(int n,int r)
    {
        if(r==0)
          return 1;
        if(r==1)
          return n%1000000007; 
        long long int res=1;
        long long int know=power(n,r/2)%1000000007;
        if(r%2)
           res=(res*n)%1000000007;
        return (res*((know*know)%1000000007))%1000000007;  
    }
};
