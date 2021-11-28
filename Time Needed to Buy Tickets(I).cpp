class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) 
    {
        int res=0;
        for(int i=0;i<nums.size();i++) 
            res=res+min(nums[i],i<=k?nums[k]:nums[k]-1);
        return res;    
    }
};
