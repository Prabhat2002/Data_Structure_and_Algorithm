class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      int n=prices.size();
        if(n<1)return 0;
       int sa[n],sb[n],sc[n];
        sa[0]=0,sb[0]=-prices[0],sc[0]=INT_MIN;
        for(int i=1;i<n;i++)
        {
            sa[i]=max(sa[i-1],sc[i-1]);
            sb[i]=max(sb[i-1],sa[i-1]-prices[i]);
            sc[i]=sb[i-1]+prices[i];
        }
        return max(sa[n-1],sc[n-1]);
    }

};
