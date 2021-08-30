class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
       string s=strs[0];
       if(strs.size()==1)
           return strs[0];
        
       for(int a=1;a<strs.size();a++)
       {
           int b=0; 
           string sf;
           if(s.length()==0)
               return "";
           while(b<strs[a].length()&&b<s.length())
           {
              if(strs[a][b]==s[b])
              {    
                 sf=sf+s[b]; 
                  b++;
              }
               else
                   break;
           }
           s=sf;
       }
       return s; 
    }
};
