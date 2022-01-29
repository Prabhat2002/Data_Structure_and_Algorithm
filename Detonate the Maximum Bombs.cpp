class Solution {
public:
    int dfs(vector<int> adj[] , vector<int> &vis , int curr){
        if(vis[curr]!=0) return 0;
        int a=1;
        vis[curr]=1;
        for(auto k:adj[curr]){
            if(vis[k]==0){
                a+=dfs(adj,vis,k);
            }
        }
        return a;       
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int r1=bombs[i][2];
                long long int r2=bombs[j][2];
long long int dist =((1ll)*(bombs[j][1]-bombs[i][1])*(bombs[j][1]-bombs[i][1])+(1ll)*(bombs[j][0]-bombs[i][0])*(bombs[j][0]-bombs[i][0]));
                if(dist<=(1ll*r1*r1)){
                    adj[i].push_back(j);
                }
                if(dist<=(1ll*r2*r2)){
                    adj[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
                 vector<int> vis(n,0);
                ans=max(ans,dfs(adj,vis,i));
        }
        return ans;
    }
};
