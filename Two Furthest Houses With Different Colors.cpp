class Solution {
public:
    int maxDistance(vector<int>& col) 
    {
        map<int,int>first,last;
        for(int i=0;i<col.size();i++)
        {
            if(first.find(col[i])==first.end())
                first[col[i]]=i;
            last[col[i]]=i;
        }
        int ans=INT_MIN;
        for(auto it:first)
        {
            for(auto m:last)
            {
                if(it.first!=m.first)
                  ans=max(ans,abs(it.second-m.second));
            }
        }
        return ans;    
    }
};
