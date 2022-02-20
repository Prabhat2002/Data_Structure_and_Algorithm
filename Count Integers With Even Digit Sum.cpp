class Solution 
{
  public:
    int countEven(int num) 
    {
         if(num==1)
             return 0;
        int count=0;
        for(int i=2;i<=num;i++)
        {
            int sum=0;
            int x=i;
            while(x!=0)
            {
                sum=sum+x%10;
                x=x/10;
            }
            if(sum%2==0)
                count++;
        }
        return count;
    }
};
