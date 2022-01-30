class Solution 
{
  public:
     bool isvalid(int n)
     {
        while(n)
        {
            if(n%10==0)
               return false;
            n=n/10;
        }
        return true;
     }
     vector<int> getNoZeroIntegers(int n) 
     {
         int i=n;
         while(i--)
         {
             if(isvalid(i) && isvalid(n-i))
                 return{i,n-i};
         }
       return {};
     }
};
