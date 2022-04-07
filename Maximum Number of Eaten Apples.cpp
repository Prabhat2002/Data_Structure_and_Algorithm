class Solution 
{
 public:
    int eatenApples(vector<int>& apples, vector<int>& days) 
    {
        priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int>> >pq;
        int n = apples.size();
        int ans = 0;        
        int i = 0;
        for(i=0;i<n||!pq.empty();++i)
        {
            if(i<n)
				pq.push({i+days[i],apples[i]});
            while(!pq.empty() && pq.top().first<=i)
                pq.pop();
            if(pq.empty())
                continue;
            auto top = pq.top();
            pq.pop();
            ++ans;
            if(top.second-1>0)
                pq.push({top.first,top.second-1});
        }
        return ans;
    }
};
