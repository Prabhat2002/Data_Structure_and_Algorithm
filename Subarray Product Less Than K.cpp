class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k<=1) 
          return 0;
        int ans=1;
        int count=0,l=0;
        for(int i = 0; i < nums.size(); i++) 
        {
            ans=ans*nums[i];
            while(ans>=k) 
                ans=ans/nums[l++];
            count=count+i-l+1;
        }
        return count;   
    }
};
