class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& nums, int n) 
    {
         vector<int>res(n+1,0);
         for(int i=0;i<nums.size();i++)
         {
            int j=nums[i][0];
            int k=nums[i][1];
            int x=nums[i][2]; 
            res[j]=res[j]+x;
            if(k+1<=n)
                 res[k+1]=res[k+1]-x;
        }
        vector<int>ans;
        for(int i=1;i<res.size();i++)
        {
            res[i]=res[i]+res[i-1];
            ans.push_back(res[i]);
        }
        return ans;
    }
};
