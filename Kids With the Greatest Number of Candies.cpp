class Solution 
{
 public:
    vector<bool> kidsWithCandies(vector<int>& nums, int e) 
    {
        int val=*max_element(nums.begin(),nums.end());
        vector<bool>v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]+e>=val)
                v[i]=1;
        }
        return v;
    }
};
