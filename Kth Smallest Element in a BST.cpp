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
    vector<int>s;
    int kthSmallest(TreeNode* root, int k) 
    {
        preorder(root);
        sort(s.begin(),s.end());
        if(k>s.size())
            return -1;
        return s[k-1];
        
    }
    void preorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        s.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
};
