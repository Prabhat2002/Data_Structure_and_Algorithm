class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        for(int i=s.length()-1,j=t.length()-1;i>=0||j>=0;--i,--j) 
        {
            if(findNextChar(s, &i)!=findNextChar(t, &j)) 
                return false;
        }
        return true;
    }

private:
    char findNextChar(const string& s,int *i) 
    {
        int skip=0;
        for (;*i>=0;--(*i)) 
        {
            if (s[*i] == '#') 
                ++skip;
            else if (skip > 0) 
                --skip;
            else 
                return s[*i];
        }
        return '\0';
    }
};
