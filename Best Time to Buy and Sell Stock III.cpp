class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int firstSell = 0;
        int secondSell = 0;
        int firstBuy = INT_MAX;
        int secondBuy = INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            firstBuy=min(firstBuy,prices[i]);
            firstSell=max(firstSell,prices[i]-firstBuy);
            secondBuy=min(secondBuy,prices[i]-firstSell);
            secondSell=max(secondSell,prices[i]-secondBuy); 
        }
        return secondSell;    
    }
};
