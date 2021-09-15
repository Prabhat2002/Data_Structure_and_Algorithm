 long long findNth(long long n)
    {
       if(n<=8)
           return n;
       long long res=0;
       long long p=1;
       while (n>0) 
       {
         int r=n%9;  
         res=res+p*r;
         n=n/9;
         p=p*10;
       }
    return res;
    }
