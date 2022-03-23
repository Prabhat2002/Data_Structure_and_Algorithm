class Solution 
{
 public:
    void calldfs(int i,vector<int>&vis, vector<int>adj[])
    {
            if(vis[i]==0)
            {
                 vis[i]=1;  
                 for(auto it: adj[i])
                 {    
                    if(vis[it]==0)
                       calldfs(it , vis , adj);
               }
            }
    }
    int findCircleNum(vector<vector<int>>& nums) 
    {
         int n=nums.size();
         vector<int>adj[n];
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 if(i==j)
                     continue;
                 else
                 {
                     if(nums[i][j]==1)
                         adj[i].push_back(j);
                 }
             }
         }
         int ans=0;
         vector<int>vis(n,0);
         for(int i=0;i<n;i++)
         {
             if(vis[i]==0)
             {
                 ans++;
                 calldfs(i,vis,adj);
             }
         }
        return ans;
    }
};

