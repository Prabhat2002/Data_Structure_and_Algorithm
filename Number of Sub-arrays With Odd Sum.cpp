class Solution 
{
 public:
    int numOfSubarrays(vector<int>& arr) 
    {
        long ans=0;
        int o=0,e=0,sum=0;
        for(auto x:arr)
        {
            sum+=x;
            if(sum%2==0)
            {
                ans+=o;
                e++;
            }
            else
            {
                ans+=1+e;
                o++;
            }
        }
        return ans%(1000000007);
    }
};
