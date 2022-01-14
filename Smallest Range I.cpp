class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) 
    {
        int val1=nums[0];
        int val2=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            val1=min(val1,nums[i]);
            val2=max(val2,nums[i]);
        }
        return max(0,val2-val1-2*k);
    }
};
