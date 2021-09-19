  int findNumberOfTriangles(int arr[], int n)
    {
      sort(arr,arr+n);
      int count = 0;
      int i = 0;
      int j = i+1;
      while(i<n-2)
      {
         int k = j+1;
         while(k<n && arr[k] < arr[i] + arr[j])
             k++;
         count += k-j-1;
         j++;
         if(j>=n)
         {
            i++;
            j = i+1;
         }
      }
     return count;
  }
