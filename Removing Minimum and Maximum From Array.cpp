class Solution
{
 public:
    int minimumDeletions(vector<int>& arr) 
    {
        int n=arr.size();
        if(n==1)
            return 1;
        int i,min1=INT_MAX,max1=INT_MIN,j,k;
        for(i=0;i<n;i++)
        {
            if(arr[i]<min1)
            {
                min1=arr[i];
                j=i;
            }
            if(arr[i]>max1)
            {
                max1=arr[i];
                k=i;
            }
        }
        int ans=min(min(max(j,k)+1,max(n-j,n-k)),(min(j+1+n-k,k+1+n-j)));
        return ans;
    }
};
