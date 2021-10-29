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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
      if (root == nullptr || subRoot == nullptr) 
      return false;

      bool res=false;
      if (root->val == subRoot->val) 
        res= test(root, subRoot);
   return res||isSubtree(root->left, subRoot) ||isSubtree(root->right, subRoot);
  }
  
private:
  bool test(TreeNode* root, TreeNode* Root) 
  {
    if (root == nullptr && Root == nullptr) 
      return true;
    if ((root && !Root) || (!root && Root)) 
      return false;
return root->val == Root->val &&test(root->left,Root->left) &&test(root->right, Root->right);
  }
};
