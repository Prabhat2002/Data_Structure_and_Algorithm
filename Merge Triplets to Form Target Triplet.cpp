class Solution 
{
 public:
    bool mergeTriplets(vector<vector<int>>& nums, vector<int>& res) 
    {
        vector<int>ans(3,INT_MIN);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i][0]>res[0] || nums[i][1]>res[1] || nums[i][2]>res[2])
                continue;
            else
            {
                ans[0]=max(ans[0],nums[i][0]);
                ans[1]=max(ans[1],nums[i][1]);
                ans[2]=max(ans[2],nums[i][2]);
            }     
        }
        return res==ans;
    }
};Merge Triplets to Form Target Triplet
