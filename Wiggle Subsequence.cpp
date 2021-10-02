class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
      int n=nums.size();
      int u=1;
      int d=1;
      for(int a=1;a<n;a++)
      {
          if(nums[a]>nums[a-1])
              u=d+1;
          else if(nums[a]<nums[a-1])
              d=u+1;
          else
              continue;
      }
      int res=max(u,d);
        return res;
    }
};
