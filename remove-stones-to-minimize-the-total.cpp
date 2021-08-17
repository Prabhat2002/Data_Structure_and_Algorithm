
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) 
    {
       int temp;
        int n=piles.size();
       while(k>0)
       {
         sort(piles.begin(),piles.end());
         reverse(piles.begin(),piles.end());
         temp=piles[0]-piles[0]/2;
         for(int a=0;a<n;a++)
         {
             if(k==0)
                 break;
             if(temp>piles[a])
                 break;
             piles[a]=piles[a]-piles[a]/2;
             k--;
         }
       }
       int sum=0;
        for(int a=0;a<n;a++)
            sum=sum+piles[a];
        
        return sum;
    }
};
