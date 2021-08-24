class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
       int n=nums.size();
       sort(nums.begin(),nums.end());
        int res;
       for(int a=0;a<n-1;a++)
       {
           if(nums[a]==nums[a+1])
           {
               res=nums[a];
               break;
           }
       }
        return res;
    }
};
