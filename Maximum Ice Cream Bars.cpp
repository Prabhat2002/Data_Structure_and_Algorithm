class Solution 
{
 public:
    int maxIceCream(vector<int>& cost, int coins)  
    {
        int count=0;
        sort(cost.begin(),cost.end());
        for(int i=0;i<cost.size();i++)
        {
            if(coins-cost[i]>=0)
            {
                coins=coins-cost[i];
                count++;
            }
        }
        return count;
    }
};
