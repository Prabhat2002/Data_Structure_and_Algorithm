class Solution 
{
 public:
    int maxAbsoluteSum(vector<int>& nums) 
    {
          int sum1=0,sum2=0;
          int ans=INT_MIN;
          int n=nums.size();
          for(int i=0;i<n;i++)
          {
              sum1+=nums[i];
              sum2+=nums[i];
              ans=max(ans,max(sum1,abs(sum2)));
              sum1=sum1<0?0:sum1;
              sum2=sum2>0?0:sum2;
          }
        return ans;
    }
};
