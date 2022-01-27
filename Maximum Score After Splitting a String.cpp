class Solution {
public:
       int maxScore(string s) 
       {
          int zero=0,ones=0,ans=0,rem=0; 
          for(char x: s) 
            ones+=x=='1';
          for(int i=0; i<s.size()-1; i++) 
          {
            rem+=s[i]=='1';
            zero+=s[i]=='0';
            ans=max(ans,zero+(ones-rem));
          }
        return ans;
      }
};
