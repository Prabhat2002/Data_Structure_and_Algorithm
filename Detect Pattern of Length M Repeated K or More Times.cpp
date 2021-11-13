class Solution 
{
 public:
    bool containsPattern(vector<int>& arr, int m, int k) 
    {
        int cnt = 0;
        int n = arr.size();
        for(int i = 0; i+m<n;i++)
        {
            if(arr[i]!=arr[i+m])
                cnt = 0;
            else
                ++cnt;
            if(cnt==(k-1)*m)
                return true;
        }
        return false;    
    }
};
