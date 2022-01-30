class Solution {
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
          nums.insert(nums.end(),nums.begin(),nums.end());
          int res=n;
          int val=0,j=0,i=0;
          while(j<2*n)
          {
               val+=(nums[j]==1);
               if(j-i+1==count)
               {
                   res=min(res,count-val);
                   val-=(nums[i]==1);
                   i++;
               }
              j++;
          }
        if(res==n)
            return 0;
        return res;
    }
};
