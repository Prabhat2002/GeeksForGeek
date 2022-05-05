class Solution 
{
  public:
  bool maxorder(Node* root)
  {
      if(root->left==NULL && root->right==NULL)
         return 1;
      else if(root->right==NULL)
         return root->data>root->left->data;
      else
      {
         bool left=maxorder(root->left);
         bool right=maxorder(root->right);
         return left&&right&&root->data>root->left->data&&root->data>root->right->data;
      }
  }
  bool isCBT(Node* root,int i,int size)
  {
      if(root==NULL)
         return 1;
      else if(i>=size)
         return 0;
      else
      {
          bool left=isCBT(root->left,2*i+1,size);
          bool right=isCBT(root->right,2*i+2,size);
          return left&&right;
      }
  }
  int count(Node* root)
  {
      if(root==NULL)
         return 0;
      return 1+count(root->left)+count(root->right);
  }
  bool isHeap(struct Node* root) 
  {
      int size=count(root);
      return isCBT(root,0,size)&&maxorder(root);
  }
};
