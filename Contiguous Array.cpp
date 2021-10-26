class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int res=0,count=0;
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();++i) 
        {
            count+=nums[i]== 1?1:-1;
            if(mp.count(count)) 
                res=max(res,i-mp[count]);
            else 
                mp[count]=i;
        }
        return res;
    }
};
