    int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            int ans=arr[0]+arr[n-1];
            for(int i=0,j=n-1;i<j;)
            {
                int sum=arr[i]+arr[j];
                if(sum==0)
                   return 0;
                else if(sum>0)
                    j--;
                else
                   i++;
                //check for nearest If(sum is either -34/34 
                //ans is either 68/-68 you have to pick sum)
                if(abs(sum)<abs(ans))
                   ans=sum;
                //if both are equal after absolute you need to store max like prefer 59 or -59
                if(abs(sum)==abs(ans))
                   ans=max(ans,sum);
            }
            return ans;
        }
