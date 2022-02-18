class Solution 
{
 public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0,j=0,fc=0,len=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
                j++;
            else if(nums[j]==0)
            {
              if(fc<k)
              {
                j++;
                fc++;
              }
              else
              {
                while(fc==k)
                {
                    if(nums[i]==0)
                        fc--;
                    i++;
                }
              }
            }
         len=max(len,j-i);
        }
        return len;
    }
};
