void recursion(int i,int n)
    {
        if(i>v.size())
            return;
        vector<int>res;
        for(int x=1;x<=v.size();x++)
        {
            if(x%i==0)
                continue;
            res.push_back(v[x-1]);    
        }
        v.erase(v.begin(),v.end());
        v=res;
        recursion(i+1,n);
        return;
    }
    bool isLucky(int n) 
    {
        if(n==1)
           return 1;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        recursion(2,n);
        auto i=find(v.begin(),v.end(),n);
        if(i!=v.end())
           return 1;
        return 0;   
    }
