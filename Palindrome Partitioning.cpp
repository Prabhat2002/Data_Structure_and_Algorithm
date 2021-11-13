class Solution 
{
 public:
  vector<vector<string>>res;
  bool palindromep(string s) 
  {
    int i=0;
    int j=s.length()-1;
    while (i<j && s[i]==s[j]) 
    {
      i++;
      j--;
    }
    return i>=j;
  }

   void dfs(string s, vector<string> ans, int pos) 
   {
     if (pos == s.length())
       res.push_back(ans);
     for (int len = 1; pos + len <= s.length(); len++) 
     {
       if(palindromep(s.substr(pos, len))) 
       {
         ans.push_back(s.substr(pos, len));
         dfs(s, ans, pos + len);
         ans.pop_back();
       }
     }  
   }

   vector<vector<string>> partition(string s) 
   {
      dfs(s, vector<string>(), 0);
      return res;
   } 
};
