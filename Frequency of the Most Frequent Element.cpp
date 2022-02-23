class Solution 
{
 public:
    int maxFrequency(vector<int>& nums, int k) 
    {
         int res=1,i=0,j;
	     long sum = 0;
	     sort(nums.begin(),nums.end());
	     for (j=0;j<nums.size();j++) 
         {
		     sum+=nums[j];
	         while(sum+k<(long)nums[j]*(j-i+1)) 
             {
		     	sum-=nums[i];
			    i++;
		     }
		     res=max(res,j-i+1);
	     }
	     return res;
    }
};
