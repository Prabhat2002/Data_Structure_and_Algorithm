class Solution 
{
 public:
    int maxPower(string s) 
    {
        int res=1,val=1;
        for (int i=1;i<s.length();++i) 
        {
            if(s[i]==s[i-1]) 
                ++val;
            else 
                val=1;
            res=max(res,val);
        }
        return res;
    }
};
