class Solution 
{
  public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) 
    {
        vector<long long int>v;
        v.push_back(0);
        for(int i=0;i<diff.size();i++)
        {
             v.push_back(v[i]+diff[i]);
        }
        long long int min=*min_element(v.begin(),v.end());
        long long int max=*max_element(v.begin(),v.end());
        max=upper-max;
        min=lower-min;
        long long int res=max-min+1;
        if(res<=0)
            return 0;
        return res;
    }
};
