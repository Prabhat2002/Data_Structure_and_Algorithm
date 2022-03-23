class Solution 
{
 public:
    int clumsy(int n) 
    {
        vector<int>v;
        if(n==1)
            return 1;
        if(n==2)
             return 2;
        if(n==3)
            return 6;
        long long int ans=0;
        for(int i=n;i>=1;i=i-4)
        {
            if(i-4>=0)
            {
                v.push_back(i*(i-1)/(i-2));
                ans=ans+i-3;
            }
            else
            {
               if(i==1)
                   v.push_back(1);
                if(i==2)
                   v.push_back(2*1);
                if(i==3)
                   v.push_back(3*2);
            }
        }
        ans=ans+v[0];
        for(int i=1;i<v.size();i++)
        {
            ans=ans-v[i];
        }
        return ans;
    }
};
