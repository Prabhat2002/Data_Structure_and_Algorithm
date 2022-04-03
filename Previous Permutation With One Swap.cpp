class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& nums) 
    {
        int n=nums.size();
        int prev=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
            {
                prev=i;
                break;
            }
        }
        if(prev==-1)
            return nums;
        else
        {
            int x;
            for(x=n-1;x>prev;x--)
            {
                if(nums[x]<nums[prev] && nums[x] !=nums[x-1])
                    break;
            }
            swap(nums[prev],nums[x]);
            // reverse(nums.begin()+prev+1,nums.end());
        }
        return nums;
    }
};
