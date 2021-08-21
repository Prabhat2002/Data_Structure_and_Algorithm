class Solution {
public:
    int rob(vector<int>& nums) 
    {
      int n=nums.size();  
      int sum=0;
      if(n==0)
       return 0;
      
      vector<int>b(n);  
      if(n>=1)
       b[0]=nums[0];
      if(n>=2)
        b[1]=nums[0]>nums[1]?nums[0]:nums[1];   
       for(int a=2;a<nums.size();a++)
       {
          b[a]=max(b[a-1],b[a-2]+nums[a]);  
       }
       return b[n-1];  
    }
};
