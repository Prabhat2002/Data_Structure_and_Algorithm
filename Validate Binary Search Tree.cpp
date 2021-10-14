class Solution 
{
 public:
     bool isValidBST(TreeNode* root) {
        TreeNode * prev = NULL;
        return isValidBST(root, prev);
    }
    bool isValidBST(TreeNode * root, TreeNode* & prev)
    {
        if(root == NULL) return true;
        if(!isValidBST(root->left, prev)) return false;
        if(prev != NULL && prev ->val >= root-> val) return false;
        prev = root;
        return isValidBST(root->right, prev);
    }
};
