class Solution {
public:
    int findLucky(vector<int>& nums) 
    {
       map<int,int>mp;
       for(int a=0;a<nums.size();a++)
           mp[nums[a]]++;
       int res=-1; 
       for(auto i=mp.begin();i!=mp.end();i++) 
       {
           if(i->first==i->second)
               res=i->first;
       }
     return res;
    }
};
