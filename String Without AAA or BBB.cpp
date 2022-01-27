class Solution {
public:
    string strWithout3a3b(int a, int b) 
    {
        string s="";
        while(a>0 || b>0) 
        {
           bool x=false;
           int l=s.length();
           if(l>=2 && s[l-1]==s[l-2]) 
           {
             if(s[l- 1]=='b')
               x=true;
           } 
           else 
           {
             if(a>=b)
                x=true;
            }

            if(x) 
            {
               a--;
               s=s+'a';
            } 
            else 
            {
               b--;
               s=s+'b';
            }
         }
         return s;
    } 
};
