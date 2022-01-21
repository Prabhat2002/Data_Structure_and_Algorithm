class Solution 
{
 public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int min = INT_MAX;
        int a = INT_MAX;
        int b = INT_MAX;
        for(auto c : nums) 
        {
            if(min>=c) 
                min=c;
            else if(b>=c) 
            {
                a = min;
                b = c;
            }
            else 
                return true;
        }
        return false;    
    }
};
