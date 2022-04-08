class Solution 
{
 public:
    vector<int> replaceNonCoprimes(vector<int>& nums) 
    {
        vector<int>res;
        res.push_back(nums[0]);
        int n=nums.size();
        int GCD,LCM,val;
        long long product;
        for(int i=1;i<n;i++)
        {
            val = nums[i];
            GCD =__gcd(res.back(),val);
            while(GCD > 1){
                product = (long long)(res.back()) * (long long)(val);
                LCM = product/GCD;
                res.pop_back();
                val = LCM;
				GCD = res.empty() ? 1 : __gcd(res.back(),val);
            }
            res.push_back(val);
        }
        return res;  
    }
};
