class Solution
{
 public:
    void recur(vector<string>&res,string S,int i,string s)
    {
        if(i==S.size())
         {
             res.push_back(s);
             return;
         }
        recur(res,S,i+1,s+" "+S[i]);
        recur(res,S,i+1,s+S[i]);
    }
    vector<string> permutation(string S)
    {
         vector<string>res;
         string s="";
         s=s+S[0];
         recur(res,S,1,s);  
         return res;
    }
};
