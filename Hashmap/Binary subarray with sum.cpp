class Solution
{
  public:
    int numberOfSubarrays(vector<int>& arr, int N, int target)
    {
        unordered_map<int,int>mp;
        mp[0]+=1;
        int sum =0,ans =0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(mp.find(sum-target)!=mp.end())
                ans+=mp[sum-target];
            mp[sum]++;
        }
        return ans;
    }
};
