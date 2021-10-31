class Solution 
{
 public:
    string getPermutation(int n, int k) 
    {
        string s="";
        for(int i=1;i<=n;i++) 
            s.push_back(i+'0');
        while(k!=1)
        {
            next_permutation(s.begin(),s.end());
            k--;
        } 
       return s;
    }
};
