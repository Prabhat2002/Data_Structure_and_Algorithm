class Solution {
public:
    int getMaxLen(vector<int>& nums) 
    {
        int n = nums.size(),neg = 0,len = 0,ans = 0;
        vector<int> negs;
        int i = 0;
        while(i < n)
        {
            int j;
            for(j = i; j < n && nums[j] != 0; ++j)
            {
                if(nums[j] < 0)
                    negs.push_back(j);
            }
            if(negs.size() % 2 == 0)
                len = j-i;
            else if(negs.size() == 1)
                len = max(negs[0]-i, j-1-(negs[0]+1)+1);
            else
            {
                int first = negs[0], last = negs.back();
                len = max(last-i, j-1-(first+1)+1);
            }
            ans = max(ans, len);
            negs.clear();
            i = j+1;
        }
        ans = max(ans, len);
        return ans;
    }
};
