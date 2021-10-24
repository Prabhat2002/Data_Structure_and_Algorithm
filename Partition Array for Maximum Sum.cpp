class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
       int n=arr.size();
       vector<int>res(n+1,0); 
       for(int i=1;i<=n;i++)
       {
           int val=INT_MIN;
           int best=INT_MIN;
           for(int j=1;j<=k&&i>=j;j++)
           {
               val=max(val,arr[i-j]);
               best=max(best,res[i-j]+val*j);
           }
           res[i]=best;
       }
       return res[n]; 
    }
};
