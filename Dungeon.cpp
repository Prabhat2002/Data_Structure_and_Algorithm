class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) 
    {
        if (dungeon.size() == 0 || dungeon[0].size() == 0)
            return 1;
        vector<vector<int>> dp(dungeon.size(), vector<int>(dungeon[0].size()));
        int rows = dp.size();
        int cols = dp[0].size();
        dp[rows - 1][cols - 1] = 1 - dungeon[rows - 1][cols - 1];
        dp[rows - 1][cols - 1] = dp[rows - 1][cols - 1] <= 0 ? 1 : dp[rows - 1][cols - 1];

        for (int row = rows - 1; row >= 0; --row)
        {
            for (int col = cols - 1; col >= 0; --col)
            {
                if (row == rows - 1 && col == cols - 1)
                    continue;
                 int HP_down = (row == rows - 1) ? INT_MAX : dp[row + 1][col] - dungeon[row][col];
                 int HP_right = (col == cols - 1) ? INT_MAX : dp[row][col + 1] - dungeon[row][col];
                 int HP = min(HP_right, HP_down);
                 dp[row][col] = HP <= 0 ? 1 : HP;
            }
        }
        return dp[0][0];
    }
};
