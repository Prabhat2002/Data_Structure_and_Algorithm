class Solution 
{
 public:
    int wateringPlants(vector<int>& nums, int a) 
    {
         int val=a;
         long int total=0;
         for(int i=0;i<nums.size();i++)
         {
             if(a-nums[i]<0)
             {
                total=total+2*i;
                a=val; 
             }
             total=total+1;
             a=a-nums[i];
         }
        return total;
    }
};
