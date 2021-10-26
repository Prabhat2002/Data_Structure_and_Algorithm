class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
       map<int,int>mp;
       int n=nums.size(); 
       for(int a=0;a<n;a++)
           mp[nums[a]]++;
       int sum=0; 
       for(auto i=mp.begin();i!=mp.end();i++)
       {
           if(i->second==1)
               sum+=i->first;
       }
    return sum;
    }
};
