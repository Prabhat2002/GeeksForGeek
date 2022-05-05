 bool check(Node* root,int min,int max)
    {
       if(root==NULL)
            return true;
        if(root->data<max && root->data>min) 
           return check(root->left,min,root->data) && check(root->right,root->data,max);
        return false;
    }
    bool isBST(Node* root) 
    {
        return check(root,INT_MIN,INT_MAX);
    }
