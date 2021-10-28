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
    int sum(TreeNode *root, int &tilt)
    {
        if(root==NULL)
            return 0;
        int lt=sum(root->left,tilt);
        int rt=sum(root->right,tilt);
        int min=abs(rt-lt);
        tilt+=min;
        int res=lt+rt+root->val;
        return res;
    }
    int findTilt(TreeNode* root) 
    {
        int tilt=0;
        sum(root,tilt);
        return tilt;
    }
};
