class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int>v(256, -1);
        int start = 0;
        int m = INT_MIN;
        for(int i = 0; i < s.size(); i++) 
        {
            if(v[s[i]] != -1) 
            {
                m = max(m, i - start);
                start = v[s[i]] + 1;
                i = v[s[i]];
                v.clear();
                v.resize(256, -1);
                continue;
            }

            v[s[i]] = i;
        }

        m = max(m, (int)s.size() - start);
        return m;
    }
};
