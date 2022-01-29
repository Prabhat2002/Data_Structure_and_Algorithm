class Solution {
public:
    string generateTheString(int n) 
    {
        if(n==0)
            return "";
        if(n==2)
            return "xy";
        string s="";
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
                s=s+"a";
            return s;
        }
        int m=n/2;
        if(m%2==1)
        {
          for(int i=0;i<m;i++)
             s=s+"a";
          for(int i=0;i<m;i++)
            s=s+"b";
        }
        else
        {
            for(int i=0;i<m-1;i++)
               s=s+"a";
            for(int i=0;i<m+1;i++)
               s=s+"b";
        }
        return s;
    }
};
