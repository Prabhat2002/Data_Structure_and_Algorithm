class Solution 
{
public:
    int numberOfBeams(vector<string>& nums) 
    {
         vector<long long int>v;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             long long int count=0;
             for(int j=0;j<nums[i].length();j++)
             {
                 if(nums[i][j]=='1')
                     count++;
             }
             if(count!=0)
                v.push_back(count);
         }
         long long int ans=0;
         for(int i=1;i<v.size();i++)
         {
             ans+=v[i]*v[i-1];
         }
        return ans;
    }
};
