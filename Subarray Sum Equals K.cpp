class Solution 
{
public:
    int subarraySum(vector<int>& nums,int k) 
    {
        int n=nums.size();
        int ans=0;
        map<int,int>sum;
        sum[0]=1;
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
            ans+=sum[total-k];
            sum[total]++;
            cout<<total<<" "<<sum[total]<<" "<<sum[total-k]<<endl;
        }
        return ans;
    }
};
