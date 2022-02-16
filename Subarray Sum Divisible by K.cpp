class Solution 
{
 public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        map<int, int> m{};
        m[0] = 1;
        int sum = 0;
        int ans = 0;
        for (auto el: nums) 
        {
            sum += el;
            int d=sum%k;
            if(d<0) 
                d+=k;
            ans += m[d];
            m[d]++;
        }
        return ans;
    }
};
