class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
         int n=nums.size();
         vector<int>v(n,1);
         for(int j=0;j<n;j++)
         {
             for(int i=j+1;i<n;i++)
             {
                 if(nums[i]>nums[j] && v[i]<=v[j])
                     v[i]=1+v[j];
             }
         }
        int res=*max_element(v.begin(),v.end());
        return res;
    }
};
