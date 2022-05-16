class Solution 
{
  public:
    int divisorSubstrings(int num, int k) 
    {
        int ans=0;
        string s=to_string(num);
        int n=s.length();
        for(int i=0;i<=n-k;i++)
        {
            string st=s.substr(i,k);
            int x=stoi(st);
            if(x==0)
                continue;
            else if(num%x==0)
                ans++;
        }
        return ans;
    }
};
