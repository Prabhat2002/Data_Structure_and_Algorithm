class Solution {
public:
    string longestDupSubstring(string S) 
    {
     unordered_set<string_view> seen;
     string_view ans;
     int start = 0, end = S.size() - 1;
     while(start <= end) 
     {
          int len = (start + end) / 2;
          bool found = false;
          for(int i = 0; i < S.size() - len + 1; i++) 
          {
             string_view sv = string_view(S).substr(i, len);
               if(seen.find(sv) != seen.end()) 
               {
                    found = true;
                    ans = sv;
                    break;
               } 
               else 
                  seen.emplace(sv);
          }
          if(found) {
               start = len + 1;
          } else {
               end = len - 1;
          }
          seen.clear();
     }
     return {ans.begin(), ans.end()};    
    }
};
