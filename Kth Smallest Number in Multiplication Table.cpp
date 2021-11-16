class Solution {
public:
    int findKthNumber(int m, int n, int k) 
    {
       int low = 1, high = m * n;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = getLowerNum(m, n, mid);
            if(count < k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
    int getLowerNum(int m, int n, int target)
    {
        int row = m - 1, col = 0;
        int res = 0;
        while(row >= 0 && col < n)
        {
            if((row + 1) * (col + 1) > target) 
                row--;
            else
            {
                res += row + 1;
                col++;
            }
        }
        return res;
    }
};
