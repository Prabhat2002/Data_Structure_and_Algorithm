 vector<int> subarraySum(int arr[], int n, int s)
    {
        int l=0,r,sum=0;
        for(r=0;r<n;r++)
        {
            sum=sum+arr[r];
            while(sum>s)
            {
                sum=sum-arr[l++];
            }
            if(sum==s)
                break;
        }
        if(sum!=s)
        {
            vector<int>p;
            p.push_back(-1);
            return p;
        }
         vector<int>v;
          v.push_back(l+1);
          v.push_back(r+1);
        return v;
        
    }
