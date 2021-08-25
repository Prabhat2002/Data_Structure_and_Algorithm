class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
          if(nums.empty())
              return {{}};
          vector<vector<int>>res;
          subset(nums,0,res);
          return res;
    }
    void subset(vector<int>&nums,int i,vector<vector<int>>&res)
    {
        if(i==nums.size()-1)
        {
            res.push_back({});
            res.push_back({nums[i]});
        }
        else
        {
            subset(nums,i+1,res);
            int n=res.size();
            for(int a=0;a<n;a++)
            {
                vector<int>r=res[a];
                r.push_back(nums[i]);
                res.push_back(r);
            }
        }
    }
};
