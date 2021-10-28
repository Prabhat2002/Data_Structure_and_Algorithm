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
    set<int>s;
    int findSecondMinimumValue(TreeNode* root) 
    {
        preorder(root);
        vector<int>v(s.begin(),s.end());
        if(v.size()<=1)
            return -1;
        return v[1];
    }
    void preorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        s.insert(root->val);
        preorder(root->left);
        preorder(root->right);
    }
};
