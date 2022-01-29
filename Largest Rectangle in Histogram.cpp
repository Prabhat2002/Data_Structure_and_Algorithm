class Solution {
public:
    int largestRectangleArea(vector<int>& nums) 
    {
        stack<int>s;
        int area = 0;
        for (int i=0;i<=nums.size();) 
        {
            if(s.empty()||(i<nums.size()&&nums[i]> nums[s.top()])) {
                s.emplace(i);
                ++i;
            } 
            else 
            {
                auto h = nums[s.top()];
                s.pop();
                auto left = s.empty() ? -1 : s.top();
                area = max(area, h * (i - left - 1));
            }
        }
        return area;    
    }
};
