class Solution {
public:
    string addSpaces(string s, vector<int>& nums) 
    {
        string res = "";
        int i=0,k=0;
        while(i<s.size() && k<nums.size())
        {
            if(nums[k] == i)
            {
                res+=" ";
                k++;
            }
            res+=s[i++];
        }
        while(i<s.size())
        {
            // cout<<res;
            res+=s[i++];
        }
        
        return res;
    }
};
