class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) 
    {
          long long int res=0;
          int n=nums.size();
          sort(nums.begin(),nums.end());
          if(nums[0]>1)
          {
              int x=nums[0]-1;
              long long int y=min(x,k);
              res=res+y*(y+1)/2;
              k=k-y;
          }
          for(int i=1;i<n && k>0;i++)
          {
              long long a=nums[i-1];
              long long b=nums[i];
              if(a+1<b)
              {
                  long long int x=min(nums[i]-nums[i-1]-1,k);
                  long long int m=nums[i-1]+x;
                  res=res+m*(m+1)/2-a*(a+1)/2;
                  k=k-x;
              }
          }
         
          if(k)
          {
              long long int y=nums.back();
              long long int x=nums.back()+k;
              res=res+x*(x+1)/2-y*(y+1)/2;
              k=0;
          }
          return res;
    }
};
