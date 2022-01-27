class Solution 
{
 public:
    int numberOfBoomerangs(vector<vector<int>>&nums) 
    {
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i==j) 
                    continue;
                int a=nums[i][0]-nums[j][0];
                int b=nums[i][1]-nums[j][1];
                int dist=a*a+b*b;
                mp[dist]++;
                //mp[1]=1 mp[4]=1
            }            
            for(auto i:mp)
                ans+=i.second*(i.second-1);
            mp.clear();
        }
        return ans; 
    }
};
