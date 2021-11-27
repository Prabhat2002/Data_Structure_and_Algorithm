class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
         int res=0;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             for(int j=i+1;j<n;j++)
             {
                 if(abs(nums[i]-nums[j])==k)
                     res++;
             }
         }
        return res;
    }
};
