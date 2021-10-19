class Solution {
public:
    int numOnes( vector<int> row) 
    {
        int lo = 0;
        int hi = row.size();
        while (lo < hi) 
        {
            int mid = lo + (hi - lo) / 2;
            if (row[mid] == 1)
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
vector<int> kWeakestRows(vector<vector<int>>& mat, int k)  
{
    int rows = mat.size();
    int cols = mat[0].size();
    int score[rows];
    int j;
    for (int i = 0; i < rows; i++) 
    {
         j = numOnes(mat[i]);
        score[i] = j * rows + i;
    }
    sort(score,score+rows);
    vector<int>ans(k);
    for (int i = 0; i < k; i++) 
        ans[i] = score[i] % rows;
    return ans;
}
};
