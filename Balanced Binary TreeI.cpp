class Solution 
{
 public:
    int height(TreeNode* root)
    {
       if(root == NULL)
          return 0;
       int l = height(root->left);
       int r = height(root->right);
       if(l==-1 || r==-1 || abs(l-r)>1)
           return -1;
       return max(l , r) + 1;
    }
    bool isBalanced(TreeNode* root)
    {
        if(root == NULL)
            return true;
        return (height(root) != -1);
    }
};
