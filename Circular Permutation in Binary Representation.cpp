class Solution {
public:
    vector<int> circularPermutation(int n, int start) 
    {
        vector<int>res;
        for(int i=0;i<(1<<n);i++)
        {
            int x=i>>1;
            res.push_back(start^i^x);
        }
        return res;
    }
};
