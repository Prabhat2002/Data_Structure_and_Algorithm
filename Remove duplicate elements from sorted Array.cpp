class Solution
{
 public:
    int remove_duplicate(int a[],int n)
    {
       int res = 0;
       for(int i=0;i<n; i++)
       {
           if(a[i]!=a[i+1])
           {
               a[res] = a[i];
               res++;
           }
       }
       return res;
    }
};
