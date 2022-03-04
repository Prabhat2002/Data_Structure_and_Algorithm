class Solution 
{
 public:
    pair<int,int> calling(int n)
    {
        pair<int,int>p={1,n};
        int diff=n-1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(diff>abs(n/i-i))
                {
                    p.first=n/i;
                    p.second=i;
                }
            }
        }
        return p;
    }
    vector<int> closestDivisors(int nums) 
    {
        int n=nums+1;
        int m=nums+2;
        pair<int,int>p1=calling(n);
        pair<int,int>p2=calling(m);
        if(abs(p1.first-p1.second)>abs(p2.first-p2.second))
            return {p2.first,p2.second};
        return {p1.first,p1.second};
    }
};
