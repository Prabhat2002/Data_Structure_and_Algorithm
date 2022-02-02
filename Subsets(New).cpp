class Solution {
public:
    void subset(vector<int>&nums,vector<int>temp,int i,vector<vector<int>>&res)
    {
        if(i==nums.size())
        {
            res.push_back(temp);
            return;
        }
        subset(nums,temp,i+1,res);
        temp.push_back(nums[i]);
        subset(nums,temp,i+1,res);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>res;
        vector<int>temp;
        subset(nums,temp,0,res);
        return res;
    }
};
