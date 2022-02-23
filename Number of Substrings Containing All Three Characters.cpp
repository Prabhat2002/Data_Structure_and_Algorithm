class Solution {
public:
    int numberOfSubstrings(string s) 
    {
          int n = s.size();
          int i=0,j=0,c=0;
          vector<int>v(3,0);
          while(j<n)
          {
              v[s[j]-'a']++;
              while(v[0]>0 && v[1]>0 && v[2]>0)
              {
                  v[s[i]-'a']--;
                  c+=(n-j);
                  i++;
              }
             j++;
           }
        return c;
    }
};
