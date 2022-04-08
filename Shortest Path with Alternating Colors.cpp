class Solution 
{
 public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges)     {
        vector<pair<int,int>>adj[n]; 
		for(auto e : redEdges)
			adj[e[0]].push_back({e[1], 1});
		for(auto e : blueEdges) 
			adj[e[0]].push_back({e[1], -1}); 
		vector<int> dRed(n, INT_MAX);
        vector<int>dBlue(n, INT_MAX); 
        dRed[0]=0; 
        dBlue[0]=0;
		queue<int>q; 
        q.push(0);
		while(!q.empty()) 
        {
			int node = q.front();
			q.pop();
			for (auto i: adj[node]) 
            {
                int second=i.first;
                int color=i.second;
                if (color==1 && dBlue[node]!=INT_MAX &&dRed[second]>dBlue[node]+1) 
                {
					dRed[second]=dBlue[node]+1;
					q.push(second);
				}
				else if(color==-1 && dRed[node]!=INT_MAX && dBlue[second]>dRed[node]+1) 
                {
					dBlue[second]=dRed[node]+1;
					q.push(second);
				}
			} 
		}
		vector<int> ans;
		for(int i = 0; i < n; i++) 
        {
			int temp = min(dRed[i], dBlue[i]);
			ans.push_back((temp == INT_MAX) ? -1: temp);
		}
		return ans;
          
    }
};
