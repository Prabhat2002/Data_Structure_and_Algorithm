class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        int count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
         for(int i=1;i<n-1;i++)   
         {
             int val1=*max_element(nums.begin()+i, nums.end());
             int val2=*min_element(nums.begin(),nums.begin()+i-1);
             if(val2<nums[i] && val1>nums[i])
                 count++;
         }
        return count;
    }
};
