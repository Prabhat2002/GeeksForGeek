// reverse a stack using recursion 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    int m=st.size();
    for(int i=0;i<m;i++)
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}
