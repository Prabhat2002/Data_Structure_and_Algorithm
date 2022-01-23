class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
       vector<int>v1;
       vector<int>v2;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]<0)
               v1.push_back(nums[i]);
           if(nums[i]>0)
               v2.push_back(nums[i]);
       }
       vector<int>res;
       for(int i=0;i<v1.size();i++)
       {
           res.push_back(v2[i]);
           res.push_back(v1[i]);
       }
        return res;
    }
};
