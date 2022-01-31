class Solution 
{
 public:
    int v[100005];
    int res=0;
    int arrayNesting(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            visited(nums[i],0,nums);
        }
        return res;
    }
    void visited(int val,int total,vector<int>&nums)
    {
        if(v[val]==1)
        {
            res=max(res,total);
            return ;
        }
        v[val]=1;
        visited(nums[val],total+1,nums);
    }
};
