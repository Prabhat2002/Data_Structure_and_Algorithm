class Solution {
public:
    int triangularSum(vector<int>& nums) 
    {
//          if(nums.size()==1)
//              return nums.back()%10;
//          while(nums.size()>1)
//          {
//              vector<int>ans;
//              for(int i=1;i<nums.size();i++)
//              {
                 
//                  ans.push_back((nums[i-1]+nums[i])%10);
//              }
//              nums=ans;
//          }
//          return nums[0];
         if (nums.size() < 1)
            return 0;
        vector<int>temp(nums.size()-1);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int x = (nums[i] + nums[i + 1]) % 10;
            temp[i] = x;
        }
        int r = triangularSum(temp);
        if(nums.size()==1)
            return nums[0];
        return r;
    }
};
