class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
       int v[n][n];
       int left =0;
       int right=n-1;
       int top=0;
       int down=n-1;
       int d=0;
       int p=1; 
       while(top<=down && left<=right)
       {
           if(d==0)
           {
              for(int a=left;a<=right;a++)
                v[top][a]=p++;
            top++;
           }
           
           if(d==1)
           {
              for(int a=top;a<=down;a++)
                v[a][right]=p++;
            right--;
           }
           
           if(d==2)
           {
              for(int a=right;a>=left;a--)
                v[down][a]=p++;
            down--;
           }
           
           if(d==3)
           {
              for(int a=down;a>=top;a--)
                v[a][left]=p++;
            left++;
           }
           d=(d+1)%4;
       }
       vector<vector<int>>res; 
       for(int a=0;a<n;a++)
       {
           vector<int>r;
           for(int b=0;b<n;b++)
           {
               r.push_back(v[a][b]);
           }
           res.push_back(r);
       }
       return res; 
    }
};
