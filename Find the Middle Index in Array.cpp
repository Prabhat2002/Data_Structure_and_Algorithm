class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
       int postsum=accumulate(nums.begin(),nums.end(),0); 
       int presum=0;
       for(int i=0;i<nums.size();i++)
        {
           postsum-=nums[i];
           if(postsum==presum)
             return i;
           presum+=nums[i];
        }
      return -1;
    }
};
