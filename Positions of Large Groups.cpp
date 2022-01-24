class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) 
    {
          int x=0;
          int n=s.length();
          vector<vector<int>>v;
          int i;
          for(i=1;i<n;i++)
          {
              if(s[i-1]==s[i])
                  continue;
              else
              {
                  if(i-x>=3)
                  {
                      v.push_back({x,i-1});
                      x=i;
                  }  
                  else
                      x=i;
              }  
          }
        if(n-x>=3)
            v.push_back({x,n-1});
        return v;
    }
};
