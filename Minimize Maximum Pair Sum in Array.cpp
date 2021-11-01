class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=0;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            res=max(res,nums[j]+nums[i]);
        }
        return res;
    }
};
