class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int ans=-1,pre=nums[0];
        for (int i=1,n=nums.size();i<n;i++) 
        {
            if(pre<nums[i]) 
               ans=max(ans,nums[i]-pre);
            else 
               pre=nums[i];
        }
        return ans;
    }
};
