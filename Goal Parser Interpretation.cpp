class Solution 
{
 public:
    string interpret(string s) 
    {
      string res="";  
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='(' && s[i+1]==')')
              res=res+'o',i++;
          else if(s[i]=='(' && s[i+1]!=')')
              continue;
          else if(s[i]==')' && s[i-1]!='(')
              continue;
          else
              res=res+s[i];
      }
      return res;  
    }
};
