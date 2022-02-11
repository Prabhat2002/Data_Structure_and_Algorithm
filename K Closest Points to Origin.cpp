class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) 
    {
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
            if(pq.size()>k)
                 pq.pop();
        }
        vector<vector<int>>res(k);
        for(int i=0;i<k;i++)
        {
            pair<int,int>p=pq.top().second;
            vector<int>v;
            v.push_back(p.first);
            v.push_back(p.second);
            res[k-i-1]=v;
            pq.pop();
        }
        return res;
    }
};
