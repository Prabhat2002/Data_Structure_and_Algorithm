class Solution 
{
 public:
    bool isMonotonic(vector<int>& nums) 
    {
        int count1=0,count2=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if((nums[i]-nums[i-1])>=0)
                count1++;
            if((nums[i]-nums[i-1])<=0)
                count2++;
        }
        if(count1==n-1 || count2==n-1)
            return 1;
        return 0;
    }
};
