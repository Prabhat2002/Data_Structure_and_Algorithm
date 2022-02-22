class Solution 
{
 public:
    int numOfSubarrays(vector<int>&nums, int k, int t) 
    {
        int i=0,j=0,count=0,ans=0;
        long long int sum=0;
        while(i<nums.size())
        {
            sum=sum+nums[i];
            if(i-j==k-1)
            {
                if(t<=sum/k)
                    count++;
                sum=sum-nums[j];
                j++;
            }
            i++;
        }
        return count;
    }
};
