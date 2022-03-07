class Solution {
public:
    vector<int> beautifulArray(int n) 
    {
        vector<int>ans={1};
        while(ans.size()<n)
        {
            vector<int>v;
            for(int i=0;i<ans.size();i++)
              if(ans[i]*2-1<=n)
                  v.push_back(ans[i]*2-1);
            for(int i=0;i<ans.size();i++)
              if(ans[i]*2<=n)
                  v.push_back(ans[i]*2);
            ans=v; 
        }
        return ans;
    }
};
