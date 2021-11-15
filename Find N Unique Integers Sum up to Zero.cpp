class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int>v(n);
        int x=0;
        if(n%2)
        {
            v[n/2]=0;
            for(int i=n/2;i>0;i--)
            {
                v[x]=i*-1;
                v[n-x-1]=i;
                x++;
            }
        }
        else
        {
            for(int i=n/2;i>0;i--)
            {
                v[x]=i*-1;
                v[n-x-1]=i;
                x++;
            }
        }
        return v;
    }
};
