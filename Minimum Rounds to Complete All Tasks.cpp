class Solution 
{
  public:
    int minimumRounds(vector<int>& tasks) 
    {
        map<int,int> mp;
        for(int i=0;i<tasks.size();i++)
            mp[tasks[i]]++;
        int num,freq,ans=0;
        for (auto i:mp)
        {
            freq = i.second;
            if(freq==1)
                return -1;
            if(freq%3==0)
                ans += freq/3;
            else
                ans += freq/3 + 1;
        }
        return ans; 
    }
};
