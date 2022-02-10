class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int>ans;
        while(num > 0)
        {
           int rem = num%10;
           ans.push_back(rem);
           num=num/10;
        }
        sort(ans.begin(),ans.end());
        int min=(ans[0]*10+ans[3]) + (ans[1]*10+ans[2]);
        return min;  
    }
};
