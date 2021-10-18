class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int curr=1;
        int prev=0;
        int count=0;
        for (int i=1; i < s.length(); i++)
        {
           if (s[i]==s[i-1]) 
             curr++;
           else
           {
             prev=curr;
             curr=1;
           }
           if (prev>=curr) 
              count++;
         }
      return count;
     }
};
