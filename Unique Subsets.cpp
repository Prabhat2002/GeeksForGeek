class Solution
{
    public:
    void recur(set<vector<int>>&res,vector<int>v,vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
            res.insert(v);
            return;
        }
        recur(res,v,nums,i+1);
        v.push_back(nums[i]);
        recur(res,v,nums,i+1);
    }
    vector<vector<int> > AllSubsets(vector<int> nums, int n)
    {
        set<vector<int>>res;
        vector<int>v;
        sort(nums.begin(),nums.end());
        recur(res,v,nums,0);
        vector<vector<int>>ans;
        for(auto i:res)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
