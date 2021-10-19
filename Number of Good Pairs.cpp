class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count=0;
        for(int a=0;a<nums.size();a++)
        {
            for(int b=0;b<nums.size();b++)
            {
                if(nums[a]==nums[b] && a<b && a!=b)
                    count++;
            }
        }
        return count;
    }
};
