class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
       int n=nums.size();
       int i=-1; 
       for(int a=n-1;a>=1;a--)
       {
          if(nums[a]>nums[a-1])
          {
              i=a;
              break;
          }
       }
       if(i==-1)
       {
         reverse(nums.begin(),nums.end());
       }
        else
        {
            int prev=i;
            for(int a=i+1;a<n;a++)
            {
               if(nums[a]>nums[i-1] and nums[a]<=nums[prev])
               {
                   prev=a;
               }
            }
            swap(nums[i-1],nums[prev]);
            reverse(nums.begin()+i,nums.end());
        }
    }
};
