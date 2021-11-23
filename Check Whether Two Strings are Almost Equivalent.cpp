class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) 
    {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<w1.length();i++)
            mp1[w1[i]]++;
        for(int i=0;i<w2.length();i++)
            mp2[w2[i]]++;
        for(char c='a';c<='z';c++)
        {
            if(abs(mp1[c]-mp2[c])>3)
                return false;
        }
        return true;
    }
};
