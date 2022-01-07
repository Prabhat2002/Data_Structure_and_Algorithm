class Solution {
public:
    int countSegments(string s) 
    {
       if(s.length()==0)
            return 0;
       int count=0; 
       int n=s.length();
       int x,y; 
       for(x=0;x<n;x++)
       {
          if(s[x]!=' ')
             break;
       }
       for(y=n-1;y>=0;y--)
       {
          if(s[y]!=' ')
             break;
       } 
       for(int i=x+1;i<=y;i++)
       {
           if(s[i]==' ' && s[i-1]!=' ')
               count++;
       }
       if(x==n)
           return 0;
       return count+1; 
    }
};
