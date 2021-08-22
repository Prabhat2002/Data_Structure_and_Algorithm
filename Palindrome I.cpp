class Solution {
public:
    bool isPalindrome(int x) 
    {
        int p;
        if(x<0)
            return false;
        else
        {
          p=reverse(x);
          if(p==x)
            return true;
          else
            return false;  
        }
    }
     int reverse(int x) 
   {
        int rev = 0;
        while (x != 0) 
        {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
