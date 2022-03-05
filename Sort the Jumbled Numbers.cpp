class Solution 
{
 public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>v;
            int val=nums[i];
            if(val>0)
            {
              while(val)
              {
                v.push_back(val%10);
                val=val/10;
              }
            } 
            else
               v.push_back(0); 
            reverse(v.begin(),v.end());
            int r=0;
            for(int i=0;i<v.size();i++)
                r=r*10+mapping[v[i]];
            res.push_back({r,i});
        }
        vector<int>ans;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            ans.push_back(nums[res[i][1]]);
        }
        return ans;
    }
};
