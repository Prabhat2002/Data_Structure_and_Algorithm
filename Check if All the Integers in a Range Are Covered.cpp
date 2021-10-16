class Solution {
public:
    bool isCovered(vector<vector<int>>&nums,int left,int right) 
    {
         vector<int> vals(52); 
        for (auto rng : nums) 
            ++vals[rng[0]], --vals[rng[1]+1]; 
        for (int i = 0, prefix = 0; i < size(vals); ++i) {
            prefix += vals[i]; 
            if (left <= i && i <= right && prefix == 0) return false;  
        }
        return true; 
    }
};
