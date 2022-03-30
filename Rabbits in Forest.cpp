class Solution {
public:
    int numRabbits(vector<int>& nums) 
    {
        map<int,int>mp; 
        int ans=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            int count;
            if(i->second%(i->first+1)==0)
               count=i->second/(i->first+1);
            else
                count=i->second/(i->first+1)+1;
            ans=ans+count*(i->first+1);
        }
        return ans;
    }
};
