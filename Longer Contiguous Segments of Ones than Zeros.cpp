class Solution 
{
 public:
    bool checkZeroOnes(string s) 
    {
        int a=0;
        int b=0;
        int res1=0;
        int res2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                a++;
            else
            {
                res1=max(res1,a);
                a=0;
            }
        }
        res1=max(res1,a);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                b++;
            else
            {
                res2=max(res2,b);
                b=0;
            }
        }
        res2=max(res2,b);
        cout<<res1<<" "<<res2;
        if(res2>=res1)
            return 0;
       return 1; 
    }
};
