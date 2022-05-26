class Solution 
{
  public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
        long long int i=0,ans=0;
        while(i*cost1<=total)
        { 
           long long s=total-i*cost1;
           ans=ans+(s/cost2)+1;
           i++;
        }
       return ans;
    }
};
