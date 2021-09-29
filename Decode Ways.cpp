class Solution {
public:
    int numDecodings(string s) 
    {
        if ((s.empty())||(s[0]=='0'))
          return 0;
        int t1=1; 
        int t2=1; 
        for (int i=1; i<s.size();i++)
        {
            int tc=0; 
            if (s[i]=='0')
            {
                int d1 = s[i-1]-'0';
                if((d1<3) && (d1>0))
                    tc=t2;
            }
            if (s[i]!='0')
            {
                if (s[i-1]=='0')
                  tc = t1;
                else
                {
                    int d2 = (s[i-1]-'0')*10+(s[i]-'0');
                    if (d2<=26) 
                        tc = t1+t2;
                    else 
                        tc =t1;
                }
            }
            t2=t1;
            t1=tc;   
        }
        return t1;   
    }
};
