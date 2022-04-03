class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=0;
        while(start||goal)
        {
            int x=start%2;
            int y=goal%2;
            if(x^y)
               ans++;
            start=start/2;
            goal=goal/2;
        }
        return ans;
    }
};
