class Solution 
{
public:
    bool find132pattern(vector<int>& nums) 
    {
         int n=nums.size();
         vector<int>res(n);
         res[0]=nums[0];
         for (int i=1;i<n;i++)
             res[i]=min(res[i-1],nums[i]);
         stack<int>st;
         for (int j=n-1;j>=0;j--) 
         {
            if(nums[j]>res[j]) 
            {
                //If current Minimum is greater than on equal to the stack top then pop it 
                while(!st.empty() && res[j]>=st.top())
                     st.pop();
                //if stack top is less than nums[j]. means its greater than the res[j]   and lesser than nums[j]
                if(!st.empty() && nums[j]>st.top())
                     return true;
                st.push(nums[j]);
             }
           }
        return false;
    }
};

    
