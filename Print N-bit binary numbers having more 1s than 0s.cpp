class Solution{
public:	
    void calling(int n,int o,int z,string s,vector<string>&res,int i)
    {
        //return at the end when i equals n
        if(i==n)
        {
            res.push_back(s);
            return;
        }
        //ones can be upto n so we have no issue of adding 1 in string even n number of times
        calling(n,o+1,z,s+'1',res,i+1);  
        //condition check for zeros less than or equal to ones
        if(z+1<=o)
           calling(n,o,z+1,s+'0',res,i+1);
        return;
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string>res;
	    string temp="";
	    calling(n,0,0,temp,res,0);
	    return res;
	}
};
