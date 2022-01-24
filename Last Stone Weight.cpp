class Solution 
{
public:
    int lastStoneWeight(vector<int>& nums) 
    {
        priority_queue<int>pq;
        for(auto k:nums) 
            pq.push(k);
        cout<<pq.top();
        while(pq.size()>=2)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(y-x>0) 
                pq.push(y-x);
        }
        return pq.size()==0?0:pq.top();
    }
};
