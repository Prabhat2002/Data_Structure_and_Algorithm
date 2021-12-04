class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
       int n= nums.size();
       vector<int>val;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n ;i++)
       {
        if(nums[i]==target)
           val.insert(val.end(),i);
       }
       return val;  
    }
};
