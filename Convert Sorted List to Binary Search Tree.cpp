class Solution 
{
 public:
    TreeNode* sortedListToBST(ListNode* head) 
    {
        vector<int>nums;
        while(head!=NULL)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }

private:
    TreeNode *sortedArrayToBSTHelper(vector<int> &nums, int start, int end) {
        if (start <= end) {
    TreeNode *node = new TreeNode(nums[start + (end - start) / 2]);
    node->left = sortedArrayToBSTHelper(nums, start, start + (end - start) / 2 - 1);
    node->right = sortedArrayToBSTHelper(nums, start + (end - start) / 2 + 1, end);
    return node;
        }
        return nullptr;
    }
};
