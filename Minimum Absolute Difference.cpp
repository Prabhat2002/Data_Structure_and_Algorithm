class Solution 
{
 public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        int n=arr.size();
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
        int res=INT_MAX;
        for(int i=1;i<n;i++)
        {
            int val=arr[i]-arr[i-1];
            res=min(res,val);
        }
        for(int i=1;i<n;i++)
        {
            if(res==arr[i]-arr[i-1])
                v.push_back({arr[i-1],arr[i]});
        }
        return v;
    }
};
