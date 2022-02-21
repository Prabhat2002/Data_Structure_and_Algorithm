class Solution 
{
 public:
    int largestRectangleArea(vector<int>& nums) 
    {
          int n=nums.size();
          stack<int>s;
          int left[n];
          int right[n];
          for(int i = 0; i < n; i++)
          {
            while(!s.empty() and nums[s.top()] >= nums[i])
                s.pop();
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
          }
          while(!s.empty())
            s.pop();
          for(int i = n - 1; i >= 0; i--)
          {
            while(!s.empty() and nums[s.top()] >= nums[i])
                s.pop();
            right[i] = s.empty() ? n : s.top();
            s.push(i);
          }
          long long mx = 0, prod;
          for(int i = 0; i < n; i++)
          {
             prod = nums[i]*(right[i]-left[i]-1);
             mx = max(mx, prod);
          }   
         return mx;
    }
};
