class Solution 
{
  public:
    string minRemoveToMakeValid(string s) 
    {
         stack<pair<int,char>>str;
         for(long long int i=0;i<s.length();i++)
         {
             if(s[i]=='(' || s[i]==')')
             {
                 if(str.empty())
                    str.push({i,s[i]});
                 else if(str.top().second=='(')
                 {
                   if(s[i]==')')
                      str.pop();
                   else
                     str.push({i,s[i]});
                 }
                 else
                   str.push({i,s[i]});
             }
         }
         int n=s.length();
         for(long long int i=n-1;i>=0;i--)
         {
             if(str.empty())
                 break;
             else
             {
                 if(str.top().second==s[i] && str.top().first==i)
                 {  
                    str.pop();
                    s.erase(s.begin()+i); 
                 }
             }
         }
        return s;
    }
};
