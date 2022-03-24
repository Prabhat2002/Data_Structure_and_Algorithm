class Solution 
{
 public:
    int numRescueBoats(vector<int>& nums, int total) 
    {
        int ans=0,sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0,j=n-1;i<=j;)
        {
            if(i!=j &&nums[i]+nums[j]>total)
            {
                j--;
                ans++;
            }
            else
            {
                i++;
                j--;
                ans++;
            }
        }
        return ans;
    }
};
