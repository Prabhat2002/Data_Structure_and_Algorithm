class Solution 
{
 public:
    string freqAlphabets(string s) 
    {
        string res;
        int i=0;
        while (i<s.length()) 
        {
            if(i+2<s.length() && s[i+2]=='#') 
            {
                res.push_back(alpha(s.substr(i, 2)));
                i+=3;
            }
            else 
            {
                res.push_back(alpha(s.substr(i, 1)));
                ++i;
            }
        }
        return res;
    }

private:
    char alpha(string s) 
    {
        return 'a'+stoi(s)-1;
    }
};
