class Solution
{
    public:
    int maxDistance(int arr[], int n)
    {
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])!=mp.end())
                ans=max(ans,i-mp[arr[i]]);
            else
               mp[arr[i]]=i;
        }
        return ans;
    }
};
