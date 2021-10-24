class Solution {
public:
    bool lemonadeChange(vector<int>& nums) 
    {
        int n=nums.size();
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==5)
                x++;
            else if(nums[i]==10)
            { 
                if(x==0)
                    return false;
                else
                {
                    x--;
                    y++;
                }
            }
            else if(nums[i]==20)
            {
                   if(y>0 && x>0)
                   {
                       x--;
                       y--;
                   }
                   else if(x>2)
                      x=x-3;
                   else
                      return false;
            }           
        }
       return true; 
    }
};
