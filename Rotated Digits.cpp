class Solution 
{
 public:
    bool isGood(string s)
    {
        bool flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='3' ||s[i]=='4' ||s[i]=='7')
                return 0;
            if(s[i]=='2'|| s[i]=='5' || s[i]=='6'||s[i]=='9'){
                flag=1;
            }
        }
        return flag;
    }
    int rotatedDigits(int n) 
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(isGood(to_string(i)))
                ans++;
        }
        return ans;
    }
};
