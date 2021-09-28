class Solution {
public:
    int numberOfArithmeticSlices(vector<int>&A) 
    {
        if(A.size()<3)
            return 0;
        int res=0;
        for (int i = 0; i + 2 < A.size(); ++i) 
        {
            int start=i;
            while (i + 2 < A.size() && A[i + 2] + A[i] == 2 * A[i + 1]) 
                res += (i++) - start + 1;
        }
        return res;
    }
};
