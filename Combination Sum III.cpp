class Solution {
public:
     void process(set<vector<int>>&res,vector<int>&curr,vector<int> &cand,int r,int st)
     {
        if(r<0)
        return;
        else if(r==0)
            res.insert(curr);
       else 
       {
          for(int i=st;i<cand.size();i++)
          {
            curr.push_back(cand[i]);
            process(res,curr,cand,r-cand[i],i+1);
            curr.pop_back();
          }
       }
     }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
       vector<int>nums;
       set<vector<int>>res;
       vector<vector<int>>ans;
       vector<int>v;
        
       for(int i=0;i<9;i++)
       {
           nums.push_back(i+1);
       }
       process(res,v,nums,n,0);
       for(auto i:res)
       {
           if(i.size()==k)
             ans.push_back(i);
       }
       return ans;
    }
};
