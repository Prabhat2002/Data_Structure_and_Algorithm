class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int i;
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r)
        {
            int mid=(r+l)/2;
            if((nums[mid]==target))
            {
                return mid;
            }
            else if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target&& target<=nums[mid])
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target  && target<=nums[r])
                {
                   l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};
