class Solution 
{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& num) 
    {
          if(num.empty())
              return {{}};
        
          vector<vector<int>>result;
          subset(num,0,result);    
      return result;
    }

    void subset(vector<int>&nums,int i,vector<vector<int>>&res)
    {    
        if(i==nums.size()-1)
        {
            res.push_back({});
            res.push_back({nums[i]});
        }
       else
        {
            subset(nums,i+1,res);
            int n=res.size();
            for(int a=0;a<n;a++)
            {
                vector<int>r=res[a];
                r.push_back(nums[i]);
                sort(r.begin(),r.end());
                auto it = find (res.begin(), res.end(),r);
                 if (it != res.end())
                 {
                    continue;
                 }
                res.push_back(r);
            }
        }
    }
};














