class Solution 
{
 public:
    vector<long long> sumOfThree(long long num) 
    {
        long long x=(num-3)/3;
        if(x*3+3==num)
            return {x,x+1,x+2};
        return {};
    }
};
