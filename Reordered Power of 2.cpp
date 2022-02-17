class Solution 
{
 public:
    vector<int> frequency(int n)
    {
        vector<int>v(10,0);
        while(n!=0)
        {
            v[n%10]++;;
            n=n/10;
        }
        return v;
    }
    bool reorderedPowerOf2(int n) 
    {
        vector<int>check=frequency(n);
        for(int i=0;i<31;i++)
        {
           long long int val=pow(2,i);
           vector<int>v=frequency(val);
           if(v==check)
               return 1;
        }
        return 0;
    }
};
