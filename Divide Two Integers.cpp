class Solution 
{
 public:
    int divide(int di, int div) 
    {
        if(div==0) 
           return INT_MAX;
        if(div==-1 && di == INT_MIN)
            return INT_MAX;
        if(div==-1 && di == INT_MAX)
            return INT_MIN;
        double val=(long long int)di/(long long int)div;
        if(val>=0)
            return floor(val);
        return ceil(val);
    }
};
