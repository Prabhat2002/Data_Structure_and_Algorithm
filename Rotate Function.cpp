class Solution {
public:
    int maxRotateFunction(vector<int>& A) 
    {
        int sum=0;
        int F=0;
        for (int i=0; i < A.size(); i++) 
        {
            sum += A[i];
            F += (i * A[i]);
        }
        int maxF=F;
        int len=A.size();
        for (int i=1; i< len; i++) 
        {
            F = F - sum + len * A[i-1];
            maxF = max(maxF, F);
        }
        return maxF;
    }
};
