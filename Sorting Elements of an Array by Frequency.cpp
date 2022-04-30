    vector<int> sortByFreq(int arr[],int n)
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        priority_queue<pair<int,int>>pq;
        for(auto i:mp)
            pq.push({-i.second,i.first});
        while(!pq.empty())
        {
            int m=-pq.top().first;
            int ele=pq.top().second;
            for(int i=0;i<m;i++)
               ans.push_back(ele);
            pq.pop();  
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
