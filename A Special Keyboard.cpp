Method 1:

class Solution 
{
  public:
    int findTime(string s1,string s2) 
    {
       int ans=0,prev=0;
       int i=0,j=0;
       while(i<s1.size())
       {
           if(s2[j]!=s1[i])
               i++;
           else
           {
               ans=ans+abs(i-prev);
               prev=i;
               j++;
               i=0;
           }
       }
      return ans;
    }
};

Method 2:

class Solution 
{
  public:
    int findTime(string s1,string s2) 
    {
        int ans=0,cur=0;
        map<char,int>mp;
        for(int i=0;i<s1.length();i++)
            mp[s1[i]]=i;
        for(int i=0;i<s2.length();i++)
        {
            ans=ans+abs(mp[s2[i]]-cur);
            cur=mp[s2[i]];
        }
        return ans;
    }
};
