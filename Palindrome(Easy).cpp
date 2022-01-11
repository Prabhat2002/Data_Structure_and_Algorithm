class Solution {
public:
    bool isPalindrome(int x) 
    {
         if(x<0 || x>=2147483647)
             return 0;
          long long int res=0;
          long long int val=x;
          while(x)
          {
              res=res*10;
              if(res>=2147483647)
                  return 0;
              res=res+x%10;
              x=x/10;
          }
          if(res==val)
              return 1;
        return 0;
    }
};
