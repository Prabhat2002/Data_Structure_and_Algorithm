class Solution {
public:
    int arrangeCoins(int n) 
    {
        if(n==1)
           return 1;
        long long int a=1;
        long long int p=2;
        while(a<=n)
        {
            a=a+p;
            p++;
        }
        return p-2;
    }
};
