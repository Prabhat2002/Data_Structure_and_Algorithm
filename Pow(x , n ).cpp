class Solution {
public:
    double myPow(double x, int n) 
    {
        if (n < 0)
        {
            x = 1.0 / x;
        }
        double result = 1.0;
        double power = x;
        
        while (n != 0)
        {
            if (n % 2 != 0)
            {
                result *= power;
            }
            n /= 2;
            power = power * power;
        }
        
        return result;
    }
};
