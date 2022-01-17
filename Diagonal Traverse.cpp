class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) 
    {
             if (matrix.size()==0 || matrix[0].size()==0) 
                 return {};
             int m = matrix.size();
             int n = matrix[0].size();
             vector<int>res(m*n);
             int p=0;
             int r=0,c=0;
             bool up=true;
             while(r<m && c<n)
             {
                  if(up)
                  {
                      while(r>0 && c<n-1)
                          res[p++]=matrix[r--][c++];
                      res[p++]=matrix[r][c];
                      if(c==n-1)
                          r++;
                      else
                          c++;
                  }
                 else
                  {
                      while(r<m-1 && c>0)
                          res[p++]=matrix[r++][c--];
                     res[p++]=matrix[r][c];
                      if(r==m-1)
                          c++;
                      else
                          r++;
                  }
                 up=!up;
             }
         return res;    
    }
};
