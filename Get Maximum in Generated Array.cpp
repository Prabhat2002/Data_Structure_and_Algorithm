class Solution 
{
 public:
    int getMaximumGenerated(int n) 
    {
        if(n==0)
            return 0;
        vector<int>v(n+1);
        v[0]=0;
        v[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=v[i/2]+v[i/2+1];
        }
        int res=0;
        for(int a=0;a<v.size();a++)
        {
            res=max(res,v[a]);
        }
        return res;
        // return v[n];
    }
};
