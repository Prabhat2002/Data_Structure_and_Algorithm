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
    vector<vector<int>> pathSum(TreeNode* root, int sum) 
    {
        vector<vector<int>>res;
        vector<int> v;
        PathSum(root,sum,0,v,res);
        return res;
    }
void PathSum(TreeNode *root,int sum,int s,vector<int>v, vector<vector<int>>&res) 
    {
        if (root==NULL) 
            return ;
        s+=root->val;
        v.push_back(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            if(s==sum) 
                res.push_back(v);
            return;
        }
        PathSum(root->left,sum,s,v,res);
        PathSum(root->right,sum,s,v,res);
    }
};
