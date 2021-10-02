class Solution 
{
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
      vector <int> res;  
      int n = nums.size();
      map <int,int>mp;
    for(auto i : nums)
        mp[i]++;
    for(auto i : mp)
    {
         if(i.second>n/3)
            res.emplace_back(i.first);
    }
    return res;
    }
};
