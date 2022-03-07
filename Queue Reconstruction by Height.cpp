bool comp(vector<int>&v1,vector<int>&v2)
{
        if(v1[0]==v2[0])
        {
            return v1[1]<v2[1];
        }     return v1[0]>v2[0];
}
class Solution 
{
 public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>&nums) 
    {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end(),comp);
        for(auto it:nums)
            ans.insert(ans.begin()+it[1],it);
        return ans;
    }
};
