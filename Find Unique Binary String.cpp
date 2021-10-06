class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        string s=""; 
        for (int i = 0; i < nums.size(); ++i) 
            s+=nums[i][i]=='0'?"1":"0"; 
        return s; 
    }
};
