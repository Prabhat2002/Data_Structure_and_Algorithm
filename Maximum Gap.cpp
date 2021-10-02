class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
       int max=0; 
       for(int a=1;a<nums.size();a++)
       {
          if(nums[a]-nums[a-1]>max)
             max=nums[a]-nums[a-1];
       }
       return max; 
    }
};
