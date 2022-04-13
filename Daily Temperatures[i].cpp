class Solution 
{
 public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        int n=T.size();
        vector<int>ans(n,0);
        stack<int>s;
        for(int i=n-1;i>=0;i--) 
        {
            while(!s.empty() && T[i]>=T[s.top()])
               s.pop();
            if(!s.empty())
                ans[i]=s.top()-i;
            s.push(i);
        }
        return ans;
    }
};
