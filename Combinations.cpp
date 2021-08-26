class Solution {
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>res;
        vector<int>v;
        subset(1,k,n,res,v);
        return res;
    }
    void subset(int i,int k,int n,vector<vector<int>>&res,vector<int>v)
    {   
      if(v.size()==k)
        res.push_back(v); 
      for(int a=i;a<=n;a++) 
      {
            v.push_back(a);
            subset(a+1,k,n,res,v);
            v.pop_back();
      }
    }
};
