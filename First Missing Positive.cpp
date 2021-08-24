class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {         
        int n=nums.size();
        for(int a=0;a<n;a++)
        {
            if(nums[a]>0 && nums[a]<=n)
            {
                if(nums[nums[a]-1]!=nums[a])
                {
                    swap(nums[nums[a]-1],nums[a]);
                    a--;
                }
            }
        }
        for(int a=0;a<n;a++)
        {
            if(nums[a]!=a+1)
                return a+1;
        }
        return n+1;
    }
};
