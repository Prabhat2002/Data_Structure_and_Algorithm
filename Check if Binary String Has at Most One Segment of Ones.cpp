class Solution 
{
 public:
    bool checkOnesSegment(string s) 
    {
        int count=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0'))
                count++;
            if(count==2)
                return false;
        }
        return true;
    }
};
