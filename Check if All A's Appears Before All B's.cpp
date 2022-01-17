class Solution {
public:
    bool checkString(string s) 
    {
       int i;
       for(i=0;i<s.length();i++)
       {
           if(s[i]=='a')
               continue;
           else
               break;
       }
       for(int j=i+1;j<s.length();j++)
       {
           if(s[j]=='a')
               return 0;
       }
       return 1;
    }
};
