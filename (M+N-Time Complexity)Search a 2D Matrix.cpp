class Solution 
{
 public:
    bool searchMatrix(vector<vector<int>>& mat, int x) 
    { 
        int i=0,j=mat[0].size()-1;
        while(i<mat.size()&&j>=0)
        {
            if(mat[i][j]==x)
               return 1;
            else if(mat[i][j]<x)
               i++;
            else
               j--;
        }
        return 0;
    }
};
