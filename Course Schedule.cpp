class Solution 
{
public:
    bool canFinish(int num, vector<vector<int>>& nums) 
    {
        vector<int>ans;
        vector<int>adj[num];
        //converting into adjency List
        for(int i=0;i<nums.size();i++)
            adj[nums[i][0]].push_back(nums[i][1]);
        
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<num;i++)
        {
           vector<int>v=adj[i];
           for(auto j:v) 
           {
               mp[j]++;
           }
            
        }
        queue<int>pq;
        for(int i=0;i<num;i++)
        {
            if(mp[i]==0)
                pq.push(i);
            
        }
        if(pq.empty())
            return 0;
        while(!pq.empty())
        {
            int u=pq.front();
            pq.pop();
            ans.push_back(u);
            for(auto v:adj[u])
            {
                mp[v]--;
                if(mp[v]==0)
                    pq.push(v);
            }
        }
        if(ans.size()==num)
           return 1;
        return 0;
    }
};

/*
  
*/
