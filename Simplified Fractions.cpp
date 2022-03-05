class Solution 
{
public:
    int gcd(int n,int m)
    {
        int res=1;
        int x=n>m?m:n;
        for(int i=2;i<=x;i++)
        {
            if(n%i==0 && m%i==0)
                res=i;
        }
        return res;
    }
    vector<string> simplifiedFractions(int n) 
    {
       set<string>res; 
       for(int i=2;i<=n;i++)
       {
           for(int j=1;j<i;j++)
           {
               int val=gcd(j,i);
               int a=j/val;
               int b=i/val;
               string s="";
               s=s+to_string(a)+"/"+to_string(b);
               cout<<s;
               res.insert(s);
           }
       }
       vector<string>ans(res.begin(),res.end());
       return ans; 
    }
};
