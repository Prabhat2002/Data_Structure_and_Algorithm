class Solution {
public:
    int oddCells(int n,int m,vector<vector<int>>& ind) 
    {
        vector<int>row(n),col(m);
        for (auto i:ind) 
        {
            row[i[0]]^=1;
            col[i[1]]^=1;
        }
        int row_sum=accumulate(row.cbegin(),row.cend(),0);
        int col_sum=accumulate(col.cbegin(),col.cend(),0);
        return row_sum*m+col_sum*n-2*row_sum*col_sum;    
    }
};
