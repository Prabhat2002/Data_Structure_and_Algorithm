class Solution 
{
 public:
    int minSteps(string s, string t) 
    {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        int x=0;
        for(auto c:mp)
            x+=abs(c.second);
        mp.clear();
        return x/2;
    }
};
