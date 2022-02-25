class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        priority_queue<pair<int,int>>pq;
        for(auto i=mp.begin();i!=mp.end();i++)
            pq.push({i->second,i->first});
        int m=0;
        int size=pq.size();
        while(!pq.empty())
        {
            m=m+pq.top().first;
            pq.pop();
            if(m>=n/2)
                return size-pq.size(); 
        }
        return 0;
    }
};
