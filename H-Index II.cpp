class Solution {
public:
    int hIndex(vector<int>& v) 
    {
        int n=v.size();
        int l=0;
        int r=n-1;
        while (l<=r) 
        {
            int mid=(l+r)/2;
            if(v[mid]>=n-mid) 
                r=mid-1;
            else 
                l=mid+1;
        }
        return n-l;
    }
};
