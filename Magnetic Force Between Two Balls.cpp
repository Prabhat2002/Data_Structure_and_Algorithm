class Solution 
{
 public:
    bool call(vector<int>&nums,int gap,int m)
    {
        int count=1;
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[j]>=gap)
            {
                count++;
                j=i;
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& nums, int m) 
    {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.back();
        if(m==2)
            return nums.back()-nums[0];
        int ans=0;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(call(nums,mid,m))
            {
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};
