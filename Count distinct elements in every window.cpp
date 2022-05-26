class Solution
{
  public:
    vector <int> countDistinct(int a[], int n, int k)
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        int j=0;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(i-j==k-1)
            {
                ans.push_back(mp.size());
                mp[a[j]]--;
                if(mp[a[j]]==0)
                   mp.erase(a[j]);
                j++;
            }
        }
        return ans;
    }
};
