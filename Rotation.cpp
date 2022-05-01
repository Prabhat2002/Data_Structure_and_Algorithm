	int findKRotation(int nums[], int n) 
	{
	    int i=0,j=n-1;         
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(mid>0 && mid<j)
            {
                if(nums[mid-1]>nums[mid] && nums[mid]<nums[mid+1])
                    return mid;
                else if(nums[mid]>nums[j])
                    i=mid+1;
                else
                    j=mid-1;
            }
            if(mid==0)
            {
                if(nums[mid]<=nums[1])
                    return mid;
                else
                    return 1;
            }
            if(mid==j)
            {
                if(nums[mid]<=nums[j-1])
                    return mid;
                else
                    return j-1;
            }   
        }
        return 0;
	}
