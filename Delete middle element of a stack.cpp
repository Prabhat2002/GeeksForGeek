class Solution
{
    public:
    void deletestackmiddle(stack<int>&s,int i,int n)
    {
        if(i==n)
          return;
        int top=s.top();
        s.pop();
        deletestackmiddle(s,i+1,n);
        if(i==n/2)
              return;
        else
            s.push(top);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        deletestackmiddle(s,0,s.size());
    }
};
