class Solution 
{
 public:
    int subset(vector<int>&nums,int i,int a,int b)
    {
       int ans =0;
       if(i<0)
          return 0;
       if(a==(b|nums[i]))
          ans=1;
       return ans+subset(nums,i-1,a,b)+subset(nums,i-1,a,b|nums[i]); 
    }
    int countMaxOrSubsets(vector<int>& nums) 
    {
       int total=0;
       for(int i=0;i<nums.size();i++)
           total=total|nums[i];
        cout<<total;
       int ans=subset(nums,nums.size()-1,total,0);
       return ans;
    }
};
