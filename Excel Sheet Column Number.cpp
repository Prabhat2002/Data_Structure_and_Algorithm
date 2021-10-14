class Solution {
public:
    int titleToNumber(string cT) 
    {
      map<char,int>mp;
      char x='A';  
      for(int a=1;a<=26;a++)
      {
          mp[x]=a;
          x++;
      }
      long long int sum=0;  
      for(int a=0;a<cT.size();a++)
      {
          sum=(sum*26)+mp[cT[a]];
      }
        return sum;
    }
};
