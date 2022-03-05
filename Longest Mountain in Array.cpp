class Solution 
{
 public:
    int longestMountain(vector<int>& nums) 
    {
        int n=nums.size();
        int res=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
            {
                int j=i;
                int k=i;
                while(j>0)
                {
                    if(nums[j]>nums[j-1])
                        j--;
                    else
                        break;
                }
                while(k<n-1)
                {
                    if(nums[k]>nums[k+1])
                        k++;
                    else
                        break;
                }
                res=max(res,k-j+1);
            }
        }
        return res;
    }
};
