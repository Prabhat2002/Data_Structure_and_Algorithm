class Solution {
public:
    bool canConstruct(string s1, string s2) 
    {
        vector<int> count(26);   
        for(char c : s2)
            count[c-'a'] += 1;
        for(char c : s1)
        {
            count[c-'a'] -= 1;
             if(count[c-'a'] < 0) 
                return false;
        }
        return true;
    }
};
