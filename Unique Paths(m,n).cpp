class Solution {
public:
    int uniquePaths(int m, int n)
    {
        int arr[m][n];
        for(int a=0;a<m;a++)   
        {
            for(int b=0;b<n;b++)
            {
                if(a==0 || b==0)
                    arr[a][b]=1;
                else
                  arr[a][b]=arr[a-1][b]+arr[a][b-1];
            }
        }
       return arr[m-1][n-1]; 
    }
};
