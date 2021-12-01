class Solution 
{
 public:
    vector<int> numberOfLines(vector<int>& widths,string S) 
    {
        vector<int> result(2);
        result.front() = 1;
        for(auto c:S) 
        {
            int w = widths[c - 'a'];
            result.back() += w;
            if (result.back() > 100) 
            {
                ++result.front();
                result.back()=w;
            }
        }
        return result;
    }
};
