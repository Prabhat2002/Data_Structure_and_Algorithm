class Solution 
{
public:
    int maxOperations(vector<int>& nums, int k) 
    {
         int count=0;
         sort(nums.begin(),nums.end());
         for(int i=0,j=nums.size()-1;i<j;)
         {
             long int sum=nums[i]+nums[j];
             if(sum>k)
                 j--;
             else if(sum<k)
                 i++;
             else
             {
                 i++;
                 j--;
                 count++;
             }
         }
        return count;
    }
};
