class Solution 
{
 public:
    int smallestRangeII(vector<int>& nums, int k) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[n-1]-nums[0];
        for(int i=1;i<n;i++)
        {
            int low=min(nums[0]+k,nums[i]-k);
            int high=max(nums[i-1]+k,nums[n-1]-k);
            ans=min(ans,high-low);
        }
        return ans;
    }
};
