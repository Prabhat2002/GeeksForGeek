class Solution
{
    public:
    vector<int>smallerleft(int a[],int n)
    {
        stack<int>st;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && st.top()>=a[i])
                st.pop();
            v[i]=st.size()!=0?st.top():0;
            st.push(a[i]);
        }
        return v;
    }
    vector<int>smallerright(int a[],int n)
    {
        stack<int>st;
        vector<int>v(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()>=a[i])
                st.pop();
            v[i]=st.size()!=0?st.top():0;
            st.push(a[i]);
        }
        return v;
    }
    
    int findMaxDiff(int a[], int n)
    {
        vector<int>left=smallerleft(a,n);
        vector<int>right=smallerright(a,n);
        int ans=0;
        for(int i=0;i<n;i++)
           ans=max(ans,abs(left[i]-right[i]));
        return ans;
    }
};
