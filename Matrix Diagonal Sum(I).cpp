Method : 1
  
int diagonalSum(vector<vector<int>>& mat) 
    {
         map<pair<int,int>,int>mp;
         int sum=0;
         int n=mat.size();
         for(int i=0;i<mat.size();i++)
         {
             if(mp.find({i,i})==mp.end())
             {
                 sum=sum+mat[i][i];
                 mp[{i,i}]=sum;
             }
             if(mp.find({n-1-i,i})==mp.end())
             {
                 sum=sum+mat[n-1-i][i];
                 mp[{n-1-i,i}]=sum;
             }
         }
        return sum;
    }

Method :2
  
   int diagonalSum(vector<vector<int>>& mat) 
    {
        if(mat.size()==1)
            return mat[0][0];
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=mat[i][i]+mat[n-i-1][i];
        if(mat.size()%2==1)
            return sum-mat[n/2][n/2];
        return sum;
    }
