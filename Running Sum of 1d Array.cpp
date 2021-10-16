class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
       int n=nums.size(); 
       vector<int>v(n);
       v[0]=nums[0]; 
       for(int a=1;a<nums.size();a++)
       {
           v[a]=v[a-1]+nums[a];
       }
       return v; 
    }
};
