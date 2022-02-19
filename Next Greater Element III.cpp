class Solution {
public:
    int nextGreaterElement(int r) 
    {
        vector<int>nums;
        while(r!=0)
        {
            nums.push_back(r%10);
            r=r/10;
        }
        reverse(nums.begin(),nums.end());
       int n=nums.size();
       int i=-1; 
       for(int a=n-1;a>=1;a--)
       {
          if(nums[a]>nums[a-1])
          {
              i=a;
              break;
          }
       }
       if(i==-1)
       {
         return -1;
       }
        else
        {
            int prev=i;
            for(int a=i+1;a<n;a++)
            {
               if(nums[a]>nums[i-1] and nums[a]<=nums[prev])
               {
                   prev=a;
               }
            }
            swap(nums[i-1],nums[prev]);
            reverse(nums.begin()+i,nums.end());
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum*10+nums[i];
            if(sum>INT_MAX)
                return -1;
        }
        return sum;
    }
};
