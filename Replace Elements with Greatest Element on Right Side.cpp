class Solution 
{
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            int x=*max_element(arr.begin()+i+1,arr.end());
            v.push_back(x);
        }
        v.push_back(-1);
        return v;
    }
};
