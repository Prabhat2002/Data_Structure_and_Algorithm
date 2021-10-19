class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
       string s="balon";
       int res=INT_MAX; 
       for(int a=0;a<s.length();a++)
       {
           int count=0;
           for(int b=0;b<text.length();b++)
           {
               if(s[a]==text[b])
                   count++;
           }
           if(a==2 || a==3)
              res=min(res,count/2);
           res=min(res,count);
       }
        return res;
    }
};
