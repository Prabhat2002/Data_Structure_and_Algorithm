class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& res) 
    {
        for(int a=0;a<res.size();a++)
        {
            reverse(res[a].begin(),res[a].end());
        }
        for(int a=0;a<res.size();a++)
        {
            for(int b=0;b<res[a].size();b++)
            {
                if(res[a][b]==1)
                    res[a][b]=0;
                else
                    res[a][b]=1;
            }
        }
        return res;
    }
};


    
