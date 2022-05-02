class Solution
{
    public:
    vector<int> bst(Node* root)
    {
        if(root==NULL)
            return {1,0,INT_MAX,INT_MIN};
        vector<int>left=bst(root->left);
        vector<int>right=bst(root->right);
        if(left[0] && right[0] && (root->data>left[3] && root->data<right[2]))
        {
            int x=min(root->data,left[2]);
            int y=max(root->data,right[3]);
            return {1,left[1]+right[1]+1,x,y};
        }
      return {0,max(left[1],right[1]),0,0};
    }
    int largestBst(Node *root)
    {
       vector<int>ans=bst(root);
       return ans[1];
    }
};
