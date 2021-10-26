class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int count[26] = {0};
        int i; 
        for (i=0;s1[i] && s2[i];i++) 
        {
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }

        for(i=0;i<26;i++)
            if(count[i])
                return false;
        
        int cnt=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
                cnt++;
        }
        if(cnt>2)
            return false;
        return true;
    }
};
