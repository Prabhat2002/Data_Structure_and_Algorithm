class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& nums, int v, int mP, int mD) 
    {
         int n=nums.size(); 
         vector<vector<int>>res;
         vector<int>ans;
         for(int i=0;i<n;i++)
         {
             if(nums[i][2]>=v && nums[i][3]<=mP && nums[i][4]<=mD)
                 res.push_back({nums[i][1],nums[i][0]});
         }
         sort(res.begin(),res.end());
         reverse(res.begin(),res.end());
         for(int i=0;i<res.size();i++)
             ans.push_back(res[i][1]);
        return ans;
    }
};
