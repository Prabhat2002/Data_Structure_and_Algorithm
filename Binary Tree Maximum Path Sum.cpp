class Solution 
{
 public:
    int ans=INT_MIN;
    int call(TreeNode* root)
    {
        if(root==NULL)
           return 0;
        int left=max(0,call(root->left));
        int right=max(0,call(root->right));
        ans=max(ans,left+right+root->val);
        return max({root->val,left+root->val,right+root->val});
    }
    int maxPathSum(TreeNode* root) 
    {
        call(root);   
        return ans;
    }
};
