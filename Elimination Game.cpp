class Solution 
{
 public:
    /*
    vector<int> ltor(vector<int>&v)
    {
        vector<int>res;
        for(int i=1;i<v.size();i=i+2)
            res.push_back(v[i]);
        return res;
    }
        
    int lastRemaining(int n) 
    {
        vector<long int>v;
        for(int i=1;i<=n;i++)
           v.push_back(i);
        while(v.size()>1)
        {
            v=ltor(v);
            if(v.size()==1)
                break;
            reverse(v.begin(),v.end());
            v=ltor(v);
            reverse(v.begin(),v.end());
        }
        return v.back();
    }
    */
    int lastRemaining(int n) 
    {
        if(n==1) 
            return 1;
        if(n&1) 
            --n;  
        return n+2-2*lastRemaining(n>>1); 
        
    }
};
