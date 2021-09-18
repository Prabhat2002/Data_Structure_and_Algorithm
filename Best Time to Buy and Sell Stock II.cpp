class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       int temp=100; 
       for(int a=0;a<prices.size()-1;a++)
       {
           if(prices[a]>=prices[a+1])
           {
               continue;
           }
           else
           {
               temp=0;break;
           }
       }
       if(temp==100)
           return 0;
        
        int ans = 0;
        int start = prices[0], end = prices[0];
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < start)
            {
                ans = max(ans, end - start);
                start = prices[i];
                end = prices[i];
            }
            else
            {
                end = max(end, prices[i]);
            }
        }
        ans = max(ans, end - start);
        return ans;
    }
};
