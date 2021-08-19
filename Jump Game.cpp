class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int m=0;
        for(int a=0;a<n;a++)
        {
            if(m < a)
              return false;
            m=max(m,a+nums[a]);
            if(m >= n-1)
              return true;
        }
        return true;
    }
};
