class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        mp[0]=-1;
        long long int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            int x=s%k;
            // cout<<x<<" "<<i<<endl;
            if(mp.find(x)!=mp.end() && i-mp[x]>=2)
                return true;
            else if(mp.find(x)==mp.end())
                mp[x]=i;
        }
        return false;
    }
};Coj
