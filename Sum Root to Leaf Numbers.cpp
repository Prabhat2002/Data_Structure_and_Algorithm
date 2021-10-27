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
    void dfs(TreeNode* root,int cur, int &res)
    {
        if(root==NULL)
            return;
        else if (root->left==NULL && root->right==NULL)
        {
            cur=cur*10+root->val;
            res+=cur;
        }
        else
        {
                cur=cur*10+root->val;
                dfs(root->left,cur,res);
                dfs(root->right,cur,res);
        }
    }
    int sumNumbers(TreeNode *root) 
    {
        int res=0;
        if (!root)
        {
            return res;
        }
        dfs(root,0,res);
        return res;
    }
};
