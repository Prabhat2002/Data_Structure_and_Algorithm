class Solution 
{
 public:
    int longestSubarray(vector<int>& nums) 
    {
       int i=0,j=0,count=0,ans=0;
       while(i<nums.size())
       {
           if(nums[i]==0)
               count++;
           while(count>1)
           {
               if(nums[j]==0)
                   count--;
               j++;
           }
           ans=max(ans,i-j);
           i++;
       }
       return ans; 
    }
};
