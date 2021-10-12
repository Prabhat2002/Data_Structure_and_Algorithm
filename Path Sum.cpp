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
    bool hasPathSum(TreeNode* r, int sum) 
    {
         if (r==NULL) 
             return false;
        if ((r->left==NULL)&&(r->right==NULL)&&(sum-r->val==0))                        return true;
return (hasPathSum(r->left,sum-r->val)||hasPathSum(r->right, sum-r->val));
    }
};
