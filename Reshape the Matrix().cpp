class Solution 
{
  public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int m=mat.size(), n=mat[0].size();
        if (m*n!=r*c) 
            return mat;
        vector<vector<int>> res(r, vector<int>(c));
        for(int i=0;i<r;i++) 
        {
            for(int j=0;j<c;j++) 
            {
                int k=i*c+j;
                res[i][j]=mat[k/n][k%n];
            }
        }
        return res;
    }
};
