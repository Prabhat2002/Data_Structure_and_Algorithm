class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        int res=0;
        int val=num;
        while(val!=0)
        {
            int r=val%10;
            res=res*10+r;
            val=val/10;
        }
        int res1=0;
        int val2=res;
        while(val2!=0)
        {
            int r=val2%10;
            res1=res1*10+r;
            val2=val2/10;
        }
        if(res1==num)
            return 1;
        return 0;
    }
};
