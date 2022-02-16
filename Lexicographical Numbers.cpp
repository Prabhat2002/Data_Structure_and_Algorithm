class Solution 
{
 public:
    vector<int> lexicalOrder(int n) 
    {
        map<string,int>mp;
        for(int i=1;i<=n;i++)
            mp[to_string(i)]=i;
        vector<int>ans;
        for(auto i=mp.begin();i!=mp.end();i++)
            ans.push_back(i->second);
        return ans;
    }
};
