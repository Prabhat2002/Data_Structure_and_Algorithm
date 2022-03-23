class Solution 
{
    public :
    bool ispal(int n)
    {
        string s=to_string(n);
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    
    bool isPrime(int n) 
    {   
       if(n<=1) 
           return 0;
       for(int i=2;i<=sqrt(n);i++)
       {
         if(n%i==0)
            return 0; 
       }
       return 1;
    }
    
    int primePalindrome(int n) 
    {
        for(int i=n;i<10000000;i++)
        {
            if(isPrime(i) && ispal(i))
                return i;
        }
        return 100030001;
    }
	
};
