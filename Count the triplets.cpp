	int countTriplet(int arr[], int n)
	{
	   int ans=0;
	   int nums[1000000]={0};
       for(int i=0; i<n; i++)
          nums[arr[i]]=1;
          
       for(int i=0;i<n-1;i++)
       {
           int j=i+1;
           while(j<n)
           {
              if(nums[arr[i]+arr[j]]==1)
                 ans++;
              j++;
           }
       }
      return ans;
	}
