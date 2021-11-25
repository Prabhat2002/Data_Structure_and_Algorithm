class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            if(val/10==0)
                continue;
            val=val/10;
            int count=1;
            while(val!=0)
            {
                count++;
                val=val/10;
            }
            if(count%2==0)
                res++;
                
        }
        return res;
    }
};
