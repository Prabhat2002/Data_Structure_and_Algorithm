class Solution 
{
 public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        return dfs(root).first;
    }

 private:
    pair<int,int>dfs(TreeNode *root) 
    {
        if (!root) 
            return {0, 0};
        auto [left_d, left_h]=dfs(root->left);
        auto [right_d, right_h]=dfs(root->right);
        return {max({left_d, right_d, left_h + right_h}), 1 + max(left_h, right_h)};
    }
};
