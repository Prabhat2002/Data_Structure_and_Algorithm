class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
         map<int,set<int>>mp;
         for(int i=0;i<nums.size();i++)
         {
             mp[nums[i]].insert(i);
         }
         for(auto i=mp.begin();i!=mp.end();i++)
         {
             vector<int>v(i->second.begin(),i->second.end());
             for(int j=1;j<v.size();j++)
             {
                 if(v[j]-v[j-1]<=k)
                     return 1;
             }
         }
        return 0;
    }
};
