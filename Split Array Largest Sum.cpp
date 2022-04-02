class Solution 
{
 public:
    bool possible(vector<int>&nums,int target,int m)
    {
        //count subarray
        int x=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum>target)
            { 
                x++;
                sum=nums[i];
            }   
        }
        return x<m;
    }
    int splitArray(vector<int>& nums, int m) 
    {
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
           sum=sum+nums[i];
        int val=*max_element(nums.begin(),nums.end());
        if(m==nums.size())
            return val;
        int n=nums.size()-1;
        long long int ans=0;
        int j=0;
        int low=val;
        int high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(possible(nums,mid,m))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};
