class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& nums, int n) 
    {
        string s=to_string(n);
        set<string> st(nums.cbegin(),nums.cend());
        int res=0;
        for(int i=1;i<s.length();++i) 
            res+=pow(nums.size(),i);  // x, xx, xxx
        int i = 0;
        for(i=0;i<s.length();++i) 
        {
            for(auto x : nums) 
            {
                if(x[0]<s[i]) 
                    res+=pow(nums.size(),s.length()-i-1);
                else 
                    break;
            }
            if (!st.count(string(1,s[i]))) 
                break;
        }               
        return res+int(i==s.length());  // 1234
    }
};
