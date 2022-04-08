class Solution 
{
 public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) 
    {
        int sum=0;
        for(int i=0;i<arr2.size();i++)
            sum=sum^arr2[i];
        int ans=0;
        for(int i=0;i<arr1.size();i++)
            ans=ans^(arr1[i]&sum);
        return ans;
    }
};
