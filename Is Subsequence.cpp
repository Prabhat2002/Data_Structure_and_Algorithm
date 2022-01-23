class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if(s.size()<=0)
             return 1;
        int j=0;
        
        for(int i=0;i<t.size();)
        {
             if(s[j]==t[i])
             {
                 j++;
                 i++;
                 if(j>=s.size())
                     return 1;
             }
            else
                i++;
        }
        return 0;
    }
};
