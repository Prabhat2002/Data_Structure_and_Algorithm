class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string>res;
        int i=0,n=nums.size();
        while(i<n)
        {
          int start,end;
          start=nums[i];            
          while(i+1<n&&nums[i+1]==nums[i]+1) 
              i++;
          end=nums[i];
          if(start==end)
            res.push_back(to_string(start));
          else
             res.push_back(to_string(start)+"->"+to_string(end));
          i++;
        }
        return res;
    }
};
