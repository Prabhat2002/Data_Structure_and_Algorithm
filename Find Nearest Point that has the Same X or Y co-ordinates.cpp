class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& nums) 
    {
        int small=INT_MAX;
        int idx=-1;
        for (int i=0;i<nums.size();i++) 
        {
            int dx=x-nums[i][0];
            int dy=y-nums[i][1];
            if (dx*dy==0 && abs(dx)+abs(dy)< small) 
            {
                small=abs(dx)+abs(dy);
                idx=i;
            }
        }
        return idx;    
    }
};
