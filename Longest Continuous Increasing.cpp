class Solution 
{
 public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int res=0,count=0;
        for (int i=0;i<nums.size();i++) 
        {
            if(i==0 || nums[i-1]<nums[i]) 
                res=max(res, ++count);
            else 
                count=1;
        }
        return res;
    }
};
