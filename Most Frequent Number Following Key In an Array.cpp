class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key && i<nums.size()-1)
                mp[nums[i+1]]++;
        }
        int res,freq=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>freq)
            {
                res=i->first;
                freq=i->second;
            }
        }
        return res;
    }
};
