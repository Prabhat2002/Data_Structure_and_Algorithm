class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
       int m = grid.size(), n = grid[0].size();
vector<vector<pair<int,int>>>pos(m, vector<pair<int, int>>(n));
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                pos[i][j] = make_pair(i, j);
            }
        }
        for(int time = 0; time < k; time++){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(pos[i][j].second < n-1){
                        pos[i][j].second += 1;
                    }else if(pos[i][j].first < m-1){
                 pos[i][j] = make_pair(pos[i][j].first+1, 0);
                    }else{
                        pos[i][j] = make_pair(0,0);
                    }
                }
            }
        }
      for(int i = 0; i < m; i++)
      {
            for(int j = 0; j < n; j++)
            {
      ans[pos[i][j].first][pos[i][j].second] = grid[i][j];
            }
        }
        
        return ans;
    }
};
