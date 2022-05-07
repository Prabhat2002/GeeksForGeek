class Solution 
{
    public:
    int DivisibleByEight(string s)
    {
       if(s.size()<=2)
       {
           int ans=0;
           for(int i=0;i<s.size();i++)
           {
               ans=ans*10+s[i]-'0';
           }
           if(ans%8==0)
              return 1;
       }
       else
       {
           int n=s.size()-1;
           int z=s[n];
           int y=s[n-1];
           int x=s[n-2];
           int ans=x*100+y*10+z;
           if(ans%8==0)
              return 1;
       }
       return -1;
    }
};
