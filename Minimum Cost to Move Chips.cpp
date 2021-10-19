class Solution 
{
 public:
    int minCostToMoveChips(vector<int>& pos) 
    {
        int even=0,odd=0;
        int n=pos.size();
        for(int a=0;a<n;a++)
        {
             if(pos[a]%2==0)
                even++;
             else
                odd++;
        }
        if(even==n && odd==n)
            return 0;
        return min(even,odd);
    }
};
