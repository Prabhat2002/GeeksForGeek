class Solution
{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        map<int,vector<int>>mp;
        int res=0;
        for(int i=0;i<n;i++)
        {
            int x=arr[i];
            int count=0;
            while(x!=0)
            {
                if(x%2==1)
                  count++;
                x=x/2;  
            }
            mp[count].push_back(arr[i]);
            res=max(res,count);
        }
        vector<int>v;
        
        for(auto i=res;i>=0;i--)
        {
            if(mp[i].size()==0)
              continue;
            vector<int>v1=mp[i];
            for(int j=0;j<v1.size();j++)
                 v.push_back(v1[j]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];
        }
    }
};
