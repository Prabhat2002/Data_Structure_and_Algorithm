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
    int minDiffInBST(TreeNode* root) 
    {
        inorder(root);
        int n=v.size();
        if(n==1)
            return v[0];
        if(n==2)
            return abs(v[0]-v[1]);
        sort(v.begin(),v.end());
        int res=INT_MAX;
        for(int a=0;a<n-1;a++)
        {
            int val=abs(v[a+1]-v[a]);
            res=min(res,val);
        }
        return res;
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};
