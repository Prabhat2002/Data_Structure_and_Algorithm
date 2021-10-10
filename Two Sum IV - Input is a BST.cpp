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
     bool findTarget(TreeNode* root, int k) {
        if (!root) 
          return false;
        vector<int> vec;
        helper(root, vec);
        int low = 0, high = vec.size()-1;
        while (low < high) {
            int sum = vec[low] + vec[high];
            if (sum == k) return true;
            else if (sum < k) {
                low++;
            } else {
                high--;
            }
        }

        return false;
    }

    void helper(TreeNode* root, vector<int> &vec) {
        if (!root) return;
        helper(root->left, vec);
        vec.push_back(root->val);;
        helper(root->right, vec);
    }
};
