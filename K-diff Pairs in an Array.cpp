class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
       
       int n=nums.size(); 
       sort(nums.begin(),nums.end());
       int count=0; 
       set<vector<int>>s; 
       for(int a=0;a<n-1;a++)
       {
           auto i=find(nums.begin()+a+1,nums.end(),nums[a]+k);
           if(i!=nums.end())
             s.insert({nums[a],nums[a]+k});
       }
       return s.size(); 
    }
};
