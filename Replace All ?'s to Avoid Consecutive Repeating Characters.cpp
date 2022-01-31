class Solution 
{
  public:
    string modifyString(string s) 
    {
         int n=s.length();
         for(int i=0;i<n;i++)
         {
            if(s[i]=='?') 
            {
                for(char ch='a'; ch<='c'; ch++) 
                {
                    if(i>0 and s[i-1]==ch) 
                        continue;
                    if(i<n-1 and s[i + 1]==ch) 
                        continue;
                    s[i]=ch;
                    break;
                }
            }
        }
        return s;
    }
};
