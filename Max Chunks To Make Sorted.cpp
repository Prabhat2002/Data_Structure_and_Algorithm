class Solution 
{
  public:
    int maxChunksToSorted(vector<int>& nums) 
    {
          int res=0,chunk=0;
          for(int i=0;i<nums.size();i++)
          {
              res=max(res,nums[i]);
              if(i==res)
                  chunk++;
          }
        return chunk;
    }
};
