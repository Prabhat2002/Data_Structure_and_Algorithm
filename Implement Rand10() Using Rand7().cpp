// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() 
    {
        int a=rand7(),b=rand7();
        while(a>5)
            a=rand7();
        while(b==5)
            b=rand7();
        return (b<=3) ? a : a+5;
    }
};
