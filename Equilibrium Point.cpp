 int equilibriumPoint(long long a[], int n) 
    {
       int sum1=a[0];
       int sum2=a[n-1];
       int i,j;
       if(n==1)
         return n;
       if(n==2)
          return -1;
       for(i=1,j=n-2;i<j;)
       {
           if(sum1<sum2)
           {
               sum1=sum1+a[i++];
           }
           else if(sum1==sum2)
           {
               sum1=sum1+a[i++];
               sum2=sum2+a[j--];
           }
           else
           {
                sum2=sum2+a[j--]; 
           }
       }
     if(sum1!=sum2)
        return -1;
        
    return i+1;  
  }
