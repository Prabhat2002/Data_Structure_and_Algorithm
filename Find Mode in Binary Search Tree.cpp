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
    vector<int> findMode(TreeNode* root) 
    {
         if (!root) 
            return {};
        
        vector<int> result;
        TreeNode *prev = NULL;
        int cnt = 1, max_cnt = 0;
        inorder(root, &prev, &cnt, &max_cnt, &result);
        return result;
    }
private:    
    void inorder(TreeNode *root, TreeNode **prev, int *cnt, int *max_cnt, vector<int> *result) 
    {
        if (root == NULL) 
            return;
        
        inorder(root->left, prev, cnt, max_cnt, result);
        if (*prev) 
        {
            if (root->val == (*prev)->val)
                ++(*cnt);
            else 
                *cnt = 1;
        }
        if (*cnt > *max_cnt) 
        {
            *max_cnt = *cnt;
            result->clear();
            result->emplace_back(root->val);
        }
        else if (*cnt == *max_cnt) 
            result->emplace_back(root->val);
        *prev = root;
        inorder(root->right, prev, cnt, max_cnt, result);
    }

};
