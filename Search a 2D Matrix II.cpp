class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) 
    {
         for(int a=0;a<mat.size();a++)
         {
             auto i=find(mat[a].begin(),mat[a].end(),target);
             if(i!=mat[a].end())
                 return true;
         }
        return false;
    }
    
};
