class Solution
{
 public:
    string check(string a,string b)
    {
        int n=min(a.size(),b.size());
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
               ans=ans+a[i];
            else
              return ans;
        }
    }
    string LCP(string ar[], int n)
    {
        if(n==1)
          return ar[0];
        string ans=ar[0];  
        for(int i=1;i<n;i++)
            ans=check(ans,ar[i]);
        if(ans.size()==0)
           return "-1";
        return ans;
    }
};
