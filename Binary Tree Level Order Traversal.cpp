class Solution 
{
 public:
    vector<vector<int>>res;
    vector<vector<int>>levelOrder(TreeNode* root) 
    {
        queue<TreeNode*>q;
        if(root) 
            q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            while(n--)
            {
                TreeNode* cur=q.front(); 
                q.pop();
                v.push_back(cur->val);
                if(cur->left) 
                    q.push(cur->left);
                if(cur->right) 
                    q.push(cur->right);
            }
            res.push_back(v);
        }
       return res;
    }   
};
