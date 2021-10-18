class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        if(mat.size()==1&& mat[0].size()==1)
            return mat[0][0];
        int n=mat.size()-1;
        int sum1=0,sum2=0;
        for(int a=0;a<mat.size();a++)
        {
            sum1=sum1+mat[a][a];
            sum2=sum2+mat[n-a][a];
        }
        if(mat.size()%2==1)
            return sum1+sum2-mat[n/2][n/2];
        return sum1+sum2;
    }
};
