class Solution 
{
 public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
       int n=arr.size(); 
       for(int i=1;i<n;i++)
          arr[i]=arr[i]+arr[i-1]; 
       long long ans=arr.back();
       for(int i=2;i<n;i=i+2)
       {
           for(int j=i;j<n;j++)
           {
               long long x=arr[j],y;
               if(j-i<=0)
                   y=0;
               else
                   y=arr[j-i-1];
               ans=ans+(x-y);
           }
       }
      return ans;
    }
};
