class Solution
{
  public:
  int check_palindrome(long long int n)
  {
	    vector<int> v;
	    while(n>0)
	    {
	        v.push_back(n%2);
	        n=n/2;
	    }
	    for(int i=0;i<=v.size()/2;i++)
	        if(v[i]!=v[v.size()-1-i])
	            return 0;
	    return 1;
	}
	int binaryPalin (long long int n)
	{
        return check_palindrome(n);
	}
};
