class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) 
    {
           if(board.empty())
        return 0;
    int n = board.size() , m = board[0].size() , cnt = 0 , r , c;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
        {
            if(board[i][j] == 'R')
            {
                r = i;
                c = j;
                break;
            }
        }
    for(int i = r - 1 ; i >= 0 ; i--)
    {
        if(board[i][c] == 'p')
        {
            cnt++;
            break;
        }
        if(board[i][c] == 'B')
            break;
    }
    for(int i = r + 1 ; i < n ; i++)
    {
        if(board[i][c] == 'p')
        {
            cnt++;
            break;
        }
        if(board[i][c] == 'B')
            break;
    }
    for(int j = c - 1 ; j >= 0 ; j--)
    {
        if(board[r][j] == 'p')
        {
            cnt++;
            break;
        }
        if(board[r][j] == 'B')
            break;
    }
    for(int j = c + 1 ; j < m ; j++)
    {
        if(board[r][j] == 'p')
        {
            cnt++;
            break;
        }
        if(board[r][j] == 'B')
            break;
    }
    return cnt;    
    }
};
