class Solution 
{
 public:
    int countPoints(string r) 
    {
        int size=r.size(),ans=0;
        vector<vector<int>>nums(10,vector<int>(3,0));
        for(int i=0;i<size;i=i+2)
        {
            if(r[i]=='R')
                nums[r[i+1]-'0'][0]=1;
            else if(r[i]=='G')
                nums[r[i+1]-'0'][1]=1;
            else
                nums[r[i+1]-'0'][2]=1;
        }
        for(auto & i:nums)
        {
            if(i[0]==1 && i[1]==1 && i[2]==1)
                ans++;
        }
        return ans; 
    }
};
