class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        int n = prices.size();
        int ans = 0;
        int mn = prices[0];
        for(int i=0;i<n;i++)
        {
         if (prices[i] < mn)
                mn = prices[i];
           if(prices[i] > mn + fee)
           {
              ans += prices[i] - fee - mn;
              mn = prices[i] - fee;
           }
        }
      return ans;  
    }
};
