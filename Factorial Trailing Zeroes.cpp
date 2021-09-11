class Solution {
public:
    int trailingZeroes(int n) 
    {
        int count = 0;
        for (int i = 5; n / i >= 1; i *= 5)
        {
          int x=n/i;
          count =count+x;
        }
        return count;    
    }
};
