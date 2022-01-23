class Solution {
public:
    //Longest Uncommon Subsequence I
    int findLUSlength(string a, string b) 
    {
      if(a==b)
         return -1;
      else
         return max(a.size(), b.size());
    }
};
