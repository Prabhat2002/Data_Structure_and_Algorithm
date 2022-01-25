class Solution 
{
 public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++) 
        {
            vector<int> row_cnt(n), col_cnt(n);
            for (int j = 0; j < n; j++) 
            {
                if (row_cnt[matrix[i][j] - 1]++ || col_cnt[matrix[j][i] - 1]++)
                    return false;
            }
        }
        return true; 
    }
};
