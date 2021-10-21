class Solution {
public:
    bool divisorGame(int n) 
    {
        int i=0;
        for(int a=1;a<n;)
        {
            if(n%a==0)
            {
                n=n-a;
                i++;
            }
        }
        if(i%2==1)
            return true;
        return false;
    }
};
