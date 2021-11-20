class Solution {
public:
    int findMaximumXOR(vector<int>& nums) 
    {
        int res=0;
        for (int i=31;i>=0;i--) 
        {
            res<<=1;
            unordered_set<int>mp;
            for (auto n:nums) 
                mp.emplace(n>>i);
            for (auto i:mp) 
            {
                if (mp.count((res|1)^i)) 
                {
                    ++res;
                    break;
                }
            }
        }
        return res;
    }
};
