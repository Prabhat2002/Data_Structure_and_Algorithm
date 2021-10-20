class Solution {
public:
    int binaryGap(int n) 
    {
        vector<int>v;
        while(n!=0)
        {
            int p=n%2;
            v.push_back(p);
            n=n/2;
        }
        reverse(v.begin(),v.end());
        int a=0;
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                res=max(res,i-a);
                a=i;
            }
        }
        return res;
    }
};
