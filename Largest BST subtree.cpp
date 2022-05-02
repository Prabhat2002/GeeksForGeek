 vector<int> bst(TreeNode<int>* root)
    {
        if(root==NULL)
            return {1,0,INT_MAX,INT_MIN};
        vector<int>left=bst(root->left);
        vector<int>right=bst(root->right);
        if(left[0] and right[0])
        {
            if(root->data>=left[3] && root->data<=right[2])
            {
                 int x=left[2];
                 int y=right[3];
                 if(x==INT_MAX)
                     x=root->data;
                 if(y==INT_MIN)
                     y=root->data;
                 return {1,left[1]+right[1]+1,x,y};
            }
        }
         return {0,max(left[1],right[1]),0,0};
    }
int largestBST(TreeNode<int>* root) 
{
    vector<int>ans=bst(root);  
	return ans[1];
}
