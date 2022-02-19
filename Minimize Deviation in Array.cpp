class Solution 
{
 public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
	    int val=INT_MAX;
        for(auto i:nums)
        {
            if(i%2) 
                i*=2;
            val=min(val,i);
            pq.push(i);
        }
        //2 2 4 6
        int ans= pq.top()-val;//ans=4
        while(pq.top()%2==0)
        {
            int cur=pq.top()/2;
            pq.pop();
            val=min(val,cur);
            pq.push(cur);
            ans=min(ans,pq.top()-val);
        }
        return ans;
    }
};
