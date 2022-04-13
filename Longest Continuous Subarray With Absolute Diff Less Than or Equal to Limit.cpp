class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        int i=0,j=0,n=nums.size();
        int max_size=0;
        priority_queue<pair<int,int>> maxh;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minh;
        while(j<n)
        {
            maxh.push({nums[j],j});
            minh.push({nums[j],j});
            while(maxh.top().second<i)
                    maxh.pop();
            while(minh.top().second<i)
                    minh.pop();
            if(maxh.top().first-minh.top().first<=limit)
            {
                max_size=max(max_size,j-i+1);
                j++;
            }
            else
                i++,j++;
        }
        return max_size;
    }
};
