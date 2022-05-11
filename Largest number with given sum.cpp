class Solution
{
    public:
    string largestNumber(int n, int sum)
    {
        string s="";
        for(int i=0;i<n;i++)
        {
            if(sum>=9)
            {
                s=s+to_string(9);
                sum=sum-9;
            }
            else if(sum>=0 && sum<9)
            {
                s=s+to_string(sum);
                sum=0;
            }
        }
        if(sum==0)
          return s;
        return "-1";
    }
};
