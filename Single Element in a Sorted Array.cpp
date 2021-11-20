class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
       int n=nums.size(); 
       for(int i=0;i<n;i++)
       {
           auto j=find(nums.begin()+i+1,nums.end(),nums[i]);
           if(j!=nums.end())
           {
               nums.erase(j);
           }
           else
           {
               return nums[i];
           }
       }
       return -1; 
    }
};
