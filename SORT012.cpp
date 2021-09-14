  void sort012(int a[], int n)
    {
        int c1=0,c2=0,c3=0;
        // sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
             c1++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
             c2++;
        }
        c3=n-(c1+c2);
        for(int i=0;i<n;i++)
        {
            if(i<c1)
              a[i]=0;
            else if(i>=c1 && i<c2+c1)
              a[i]=1;
            else
              a[i]=2;
        }
    }
