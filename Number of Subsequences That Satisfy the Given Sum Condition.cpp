class Solution 
{
 public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n,1);
        sort(nums.begin(), nums.end());
        int i, j = n-1;
        int MOD = 1000000007;
        int total = 0;
        for(i = 1; i < n; i++)
        {
            dp[i] = dp[i-1] * 2;
            if(dp[i] >= MOD) 
                dp[i] -= MOD; 
        }
        i = 0;
        while(i <= j)
        {
            if(nums[i] + nums[j] <= target)
            {
                total += dp[j-i];
                i++;
                if (total >= MOD) 
                    total -= MOD;
            }
            else 
                j--;
        }
        return total;
    }
};
