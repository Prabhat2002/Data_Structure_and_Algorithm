class Solution 
{
  public:
    int minMoves2(vector<int>& nums) 
    {
          int i,j;
          sort(nums.begin(),nums.end());
          long long int sum=0;
          int n=nums.size();
          i=0,j=n-1;
        while(i<j)
          {
              sum=sum+(nums[j]-nums[i]);
              i++;
              j--;
          }
        /*
        int med=n%2==0 ? (nums[n/2]+nums[n/2-1])/2:nums[n/2];
        for(int i=0;i<n;i++)
            sum=sum+abs(nums[i]-med);
         */
        return sum;
     }
};
