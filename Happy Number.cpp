class Solution {
public:
    bool isHappy(int n) 
    {
        set<int> s;
    while(s.count(n)==0)
    {
        if(n==1) 
            return true;
        s.insert(n);
        int temp=0;
        while(n)
        {
            temp+= (n%10)*(n%10);
            n/=10;
        }
        n=temp;
     }
      return false;
    }
};
