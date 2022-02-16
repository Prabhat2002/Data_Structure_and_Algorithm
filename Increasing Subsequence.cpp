class Solution {
public:
     void func(vector<vector<int>> &res , vector<int> &ans , vector<int> &nums , int i, set<vector<int>> &s)
    {
            if(i>=nums.size())
            {
                    if(ans.size()>1)
                    s.insert(ans);
                    return ;
            }            
            if(ans.empty() || nums[i]>=ans.back())
            {
               ans.push_back(nums[i]);
               func(res,ans,nums,i+1,s);
               ans.pop_back();
               func(res,ans,nums,i+1,s);
            }
            else
               func(res,ans,nums,i+1,s);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> ans;
        set<vector<int>> s;
        func(res , ans , nums , 0,s);
        for(auto v:s)
           res.push_back(v);
        return res;
    }
};
