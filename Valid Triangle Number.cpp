class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
      int ans  = 0;
      if (nums.size() < 3) 
        return ans;
      sort(nums.begin(),nums.end());
      for (int i = 2; i < nums.size(); i++) 
      {
        int l= 0, r=i-1;
        while (l<r) 
        { 
         if(nums[l]+nums[r]>nums[i]) 
         {
           ans += (r-l);
           r--;
         }
         else 
          l++;
      }
    }
    return ans;
  }
};
