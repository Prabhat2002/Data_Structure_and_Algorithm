class Solution {
public:
    string toLowerCase(string s) 
    {
       for(int i=0;i<s.length();i++)
       {
           char c=s[i];
           s[i]=tolower(c);
       }
       return s; 
    }
};
