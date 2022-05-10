class Solution 
{
 public:
     void process(set<vector<int>>&res,vector<int>&curr,vector<int> &cand,int r,int i)
     {
        if(r<0||i>cand.size())
          return;
        if(r==0)
        {
            res.insert(curr);
            return;
        }
        curr.push_back(cand[i]);
        process(res,curr,cand,r-cand[i],i+1); 
        curr.pop_back(); 
        process(res,curr,cand,r,i+1);
     }
     vector<vector<int>> combinationSum3(int k, int n) 
     {
       vector<int>nums;
       set<vector<int>>res;
       vector<vector<int>>ans;
       vector<int>v;
        
       for(int i=1;i<=9;i++)
           nums.push_back(i);
       process(res,v,nums,n,0);
       for(auto i:res)
       {
           if(i.size()==k)
             ans.push_back(i);
       }
       return ans;
     }
};
