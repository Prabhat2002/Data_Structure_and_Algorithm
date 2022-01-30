class Solution {
public:
    int findFinalValue(vector<int>& nums, int x) 
    {
        while(1)
        {
            auto i=find(nums.begin(),nums.end(),x);
            if(i!=nums.end())
               x=x*2;
            else
                break;
        }
        return x;
    }
};
