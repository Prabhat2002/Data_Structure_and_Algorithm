class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
       int n=nums.size(); 
       set<int>s;
       s.insert(nums[0]);
       for(int a=1;a<n;a++)
       {
          int x=nums[a];
          auto i=s.find(x);
          if(i!=s.end())
             s.erase(x);
          else  
             s.insert(nums[a]);
       }
       auto i=s.begin();
       int res=*i;
       return res; 
    }
};
