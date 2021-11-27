class Solution 
{
 public:
    bool isPrefixString(string s, vector<string>& words) 
    {
         string str="";
        for(auto it:words)
        {
            if(str.size()>s.size())
            {
                return false;
            }
            str+=it;
            if(s==str)
            {
                return true;
            }
        }
        if(str==s)
        {
            return true;
        }
        return false;   
    }
};
