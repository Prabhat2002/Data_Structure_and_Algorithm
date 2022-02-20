class Solution 
{
 public:
    int removeCoveredIntervals(vector<vector<int>>& nums) 
    {
          sort(nums.begin(),nums.end());
          vector<int>it=nums[0];
          int count=1;
          for(int i=1;i<nums.size();i++)
          {
              if(it[0]<=nums[i][0] && it[1]>=nums[i][1])
                  continue;
              if(it[0]>=nums[i][0] && it[1]<=nums[i][1])
                 it=nums[i];
              else
              {
                  it=nums[i];
                  count++;
              }
          }
        return count;
    }
};
