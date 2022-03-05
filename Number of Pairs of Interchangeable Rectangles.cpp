class Solution 
{
 public:
    long long interchangeableRectangles(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        map<double,long long int>mp;
        for(int i=0;i<n;i++)
        {
            int a=nums[i][0];
            int b=nums[i][1];
            double val1=double(a)/double(b);
            mp[val1]++;
        }
        long long int res=0;
        for(auto i=mp.begin();i!=mp.end();i++)
               res=res+(i->second)*(i->second-1)/2;
        return res;
    }
};
