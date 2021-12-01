class Solution 
{
 public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++)
            sum=sum+nums[i];
        double res=sum/k;
        for(int i=k;i<n;i++)
        {
            sum=sum+nums[i];
            sum=sum-nums[i-k];
            double val=sum/k;
            res=max(res,val);
        }
        return res;
    }
};
