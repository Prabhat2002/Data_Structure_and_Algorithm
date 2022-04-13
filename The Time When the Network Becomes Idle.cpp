class Solution 
{    
 public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& pat) 
    {
        int n=pat.size(); 
        vector<int>graph[n];
        for(int i=0;i<edges.size();i++)
        {
           graph[edges[i][0]].push_back(edges[i][1]);
           graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>dist(n,INT_MAX);
        queue<int>q;
        vector<bool>vis(n, false);
        q.push(0);
        vis[0]=true;
        int d=0;
        while(!q.empty()) 
        {
            int size=q.size();
            while(size--)
            {
                int u=q.front();
                q.pop();
                dist[u]=d;
                for(auto v:graph[u]) 
                {
                    if(!vis[v]) 
                    {
                        q.push(v);
                        vis[v]=true;
                    }
                }
            }
            d++;
        }
        int ans=0;
        for(int i=1;i<n;i++) 
        {
            int first=dist[i]*2; 
            int wait=first-1;
            int num=wait/pat[i];
            int time=first+num*pat[i];
            ans=max(ans,time);
        }
        return ans+1; 
    }
};
