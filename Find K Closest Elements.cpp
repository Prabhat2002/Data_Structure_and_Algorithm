class Solution 
{
 public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        auto i=distance(arr.begin(),lower_bound(arr.begin(), arr.end(), x));
        int l=i-1,r=i;                                    
        while(k--) 
           (r>=arr.size()||(l>=0&&abs(arr[l]-x)<=abs(arr[r]-x)))?--l:++r;
        return vector<int>(arr.begin()+l+1, arr.begin()+r);
    }
};
