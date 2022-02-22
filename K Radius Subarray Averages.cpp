class Solution 
{
  public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        vector<int>v(nums.size(), -1);
        int l=0,r=0;
        long long sum = 0;
        while(r<nums.size())
        {
            int size=r-l;  
            sum+=nums[r];
            if(size==2*k)
            {
                v[r-k]=sum/((2*k)+1);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }
        return v;
    }
};
