class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
        if(nums.empty())
             return {};
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(),1);
        vector<int> prev(nums.size(),-1);
        int large=0;
        for(int i=0;i<nums.size();++i) 
        {
            for(int j=0;j<i;++j) 
            {
                if(nums[i]%nums[j]==0) 
                {
                    if (dp[i]<dp[j]+1) 
                    {
                        dp[i]=dp[j]+1;
                        prev[i]=j;
                    }
                }
            }
            if (dp[large]<dp[i]) 
                large=i;
        }
        vector<int>res;
        for (int i=large;i!=-1;i=prev[i]) 
            res.push_back(nums[i]);
        reverse(res.begin(),res.end());
        return res;
    }
};
