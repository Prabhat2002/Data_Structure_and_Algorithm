class Solution 
{
  public:
    bool checkValidString(string s) 
    {
          int open=0,close=0;
          int count=0;
          int n=s.length();
          for(int i=0;i<n;i++)
          {
              if(s[i]=='*')
                  count++;
              else
              {
                  if(s[i]=='(')
                      open++;
                  else    
                      close++;
              }
              if(open+count<close)
                  return 0;
          }
          count=0,open=0,close=0;
          for(int i=n-1;i>=0;i--)
          {
              if(s[i]=='*')
                  count++;
              else
              {
                  if(s[i]=='(')
                      open++;
                  else    
                      close++;
              }
              if(close+count<open)
                  return 0;
          }
         return 1; 
    }
};
