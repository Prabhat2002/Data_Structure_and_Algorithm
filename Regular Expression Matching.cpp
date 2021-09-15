class Solution 
{
 public:
    bool isMatch(string s, string p) 
    {
       if (p.empty()) 
           return s.empty();
       bool check = !s.empty() && (s[0] == p[0] || '.' == p[0]);
       if (p.size() >= 1 && '*' == p[1])
           return isMatch(s, p.substr(2)) || (check && isMatch(s.substr(1), p));
       else
           return check && isMatch(s.substr(1), p.substr(1));    
    }
};
