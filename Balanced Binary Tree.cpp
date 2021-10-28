/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*int height(TreeNode* root)
    {
      if(root==NULL)
          return 0;
      return max(height(root->left),height(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root)
    {
      if(root==NULL)
         return true;
      int l=height(root->left),r=height(root->right);
      if(abs(l-r)>1)
         return false;
      return isBalanced(root->left) && isBalanced(root->right);
    }*/
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
