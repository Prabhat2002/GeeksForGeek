class Solution
{
    public:
    bool checkBinary (string s)
    {
       //finding first '1'
       int first=-1;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='1')
           {
               first=i;
               break;
           }
       }
       //Finding last '1'
       int last=-1;
       for(int i=s.length()-1;i>=0;i--)
       {
           if(s[i]=='1')
           {
               last=i;
               break;
           }
       }
       for(int i=first+1;i<last;i++)
       {
           if(s[i]=='0')
               return false;
       }
       return true;
    }
};
