class Solution 
{
 public:
    int countMatches(vector<vector<string>>& items, string Key, string Value) 
    {
        map<string,int>rule={{"type", 0},{"color", 1},{"name", 2}};
        int res=0;
        for(auto i:items) 
        {
            if (i[rule.at(Key)]==Value)
                res++;
        }
        return res;       
    }
};
