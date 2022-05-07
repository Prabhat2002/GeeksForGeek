class Solution 
{
  public:
    int getGray(int n) 
    {
        long long int ans=0;
        if(n<=1)
           return n;
        vector<int>res;
        while(n!=0)
        {
            res.push_back(n%2);
            n=n/2;
        }
        reverse(res.begin(),res.end());
        vector<int>res1(res.size());
        res1[0]=res[0];
        for(int i=1;i<res.size();i++)
            res1[i]=(res[i]^res[i-1]);
        for(int i=0;i<res1.size();i++)
            ans=ans*2+res1[i];    
        return ans;
    }
}
