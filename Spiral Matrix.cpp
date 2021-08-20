class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
     int m=0;   
     for(auto it=matrix.begin();it!=matrix.end();it++)
     {
         m++;
     }
     vector<int>v;        
     int n=matrix[0].size();
     int bottom=m-1;
     int top=0;
     int left=0;
     int right=n-1;
     int dv=0;
while(top<=bottom && left <= right)
    {
          if(dv==0)
          {
            for(int a=left;a<=right;a++)
            {
                v.push_back(matrix[top][a]);
            }
            top++;
          }
        else if(dv==1)
          {
            for(int a=top;a<=bottom;a++)
            {
                v.push_back(matrix[a][right]);
            }
            right--;
          }     
    
         else if(dv==2)
          {
            for(int a=right;a>=left;a--)
            {
                v.push_back(matrix[bottom][a]);
            }
             bottom--;
          }
          
          else if(dv==3)
          {
            for(int a=bottom;a>=top;a--)
            {
                v.push_back(matrix[a][left]);
            }
            left++;
          }
         dv=(dv+1)%4; 
     }
     return v;   
    }
};
