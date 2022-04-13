 long long maxSubarraySum(int arr[], int n)
    {
        int ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            ans=max(ans,sum);
            if(sum<0)
               sum=0;
        }
        return ans;
    }
