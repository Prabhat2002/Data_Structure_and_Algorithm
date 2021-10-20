class Solution {
public:
    string reverseStr(string s, int k) 
    {
        
        for(auto i = 0; i < s.length(); i += 2 * k) 
           reverse(s.begin() + i, s.begin() + min(i + k, (int)s.length()));
        return s;
    }
};
