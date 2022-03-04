class Solution 
{
 public:
    int calling(string s1,string s2)
    {
        int count=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
                  count++;
        }
        return count/2;          
    }
    int minSwaps(string s) 
    {
        int a=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                a++;
        }
        int b=s.length()-a;
        if(abs(b-a)>1)
            return -1;
        string s1="";
        string s2="";
        int x=0,y=1;
        for(int i=0;i<s.length();i++)
        {
            x=!x;
            s1=s1+to_string(x);
        }
        for(int i=0;i<s.length();i++)
        {
            y=!y;
            s2=s2+to_string(y);
        }
        if(a>b)
            return calling(s1,s);
        else if(b>a)
            return calling(s2,s);
        else
            return min(calling(s1,s),calling(s2,s));
    }
};
