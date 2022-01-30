class Solution 
{
public:
    int minSwaps(vector<int>& nums) 
    {
          int n=nums.size();
          int count=0;
          for(int i=0;i<n;i++)
          {
              if(nums[i]==1)
                   count++;
          }
          vector<int>v(count,1);
          int res=INT_MAX;
          for(int i=0;i<2*n-count;i++)
          {
               int val=0;
              for(int j=i;j<i+count;j++)
              {
                  if(nums[j%n]==0)
                        val++;
              }
              res=min(res,val);
          }
        return res;
    }
};
