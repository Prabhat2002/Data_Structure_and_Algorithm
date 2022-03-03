class Solution 
{
 public:
    int minimumRefill(vector<int>& nums, int a, int b)  
    {
        int n=nums.size();
        int i=0,j=n-1;
        int val1=a;
        int val2=b;
        int count=0;
        while(i<=j)
        {
            if(i==j)
            {
                if(a>=b)
                {
                   if(a-nums[i]<0)
                   {
                      count++;
                      a=val1;
                   }
                   a=a-nums[i++];                    
                }
                else
                {
                   if(b-nums[i]<0)
                   {
                      count++;
                      b=val2;
                   }
                   b=b-nums[j--]; 
                }
            }
            else
            {
               if(a-nums[i]<0)
               {
                  a=val1;
                  count++;
               }
               if(b-nums[j]<0)
               {
                  b=val2;
                  count++;
               }  
               a=a-nums[i++];
               b=b-nums[j--]; 
            }
        }
        return count;
    }
};
