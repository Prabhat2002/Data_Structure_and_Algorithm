class Solution 
{
public:
    int minDeletion(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if((i-ans)%2==0 && nums[i+1]==nums[i])
                 ans++; 
        }
        if((n-ans)%2)
            ans++;
        return ans;
    }
};
