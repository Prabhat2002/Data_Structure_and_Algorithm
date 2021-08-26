class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
       int n=matrix.size();
       int m=matrix[0].size(); 
       bool temp=false; 
       for(int a=0;a<n;a++)
       {
           if(temp==true)
           {
               break;
           }
           if(matrix[a][0]<=target && target <=matrix[a][m-1])
           {
               vector<int>v=matrix[a];
               for(int b=0;b<m;b++)
               {
                   if(target==v[b])
                       temp=true;
               }
           }
       }
      return temp;  
    }
};
