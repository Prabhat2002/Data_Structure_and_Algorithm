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
    vector<int>v;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
         preorder(root1);
         preorder(root2);
         sort(v.begin(),v.end());
        return v;
    }
    void preorder(TreeNode *root)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
};
