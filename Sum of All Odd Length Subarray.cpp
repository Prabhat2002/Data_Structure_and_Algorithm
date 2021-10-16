class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
         int n=arr.size();
         int sum=0;
         for(int a=0;a<n;a++)
             sum=sum+arr[a];
         for(int a=3;a<=n;a=a+2)
         {
             //   3-5
             for(int b=0;b<=n-a;b++)
             {
                 // 0-2
                 for(int c=b;c<a+b;c++)
                 {
                     sum=sum+arr[c];
                 }
             }
         }
        return sum;
    }
};
