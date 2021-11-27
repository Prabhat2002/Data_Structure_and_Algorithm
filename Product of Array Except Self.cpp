class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
       int count=0; 
       long long int mul=1;
       long long int mul1=1; 
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
               count++;
       }
       int n=nums.size();  
         for(int i=0;i<n;i++)
           {
               if(nums[i]!=0)
                   mul1*=nums[i];
               mul=mul*nums[i];
           }
       vector<int>res(n);
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0 && count==1)
             res[i]=mul1;
           else if(count>1 && nums[i]==0) 
             res[i]=0; 
           else 
               res[i]=mul/nums[i];
       }
       nums.clear();
       nums=res; 
       return nums; 
    }
};
