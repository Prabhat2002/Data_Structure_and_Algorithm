class Solution {
public:
    int subsetXORSum(vector<int>& nums) 
    {
        int val=0;
        for (auto x : nums) {
            val=val|x;
        }
        return val*pow(2,nums.size()-1);
    }
};
