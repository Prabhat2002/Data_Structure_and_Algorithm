class Solution 
{
 public:
    int minSteps(string s, string t) 
    {
        int n=s.length();
        int m=t.length();
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<n;i++)
           mp1[s[i]]++;
        for(int i=0;i<m;i++)
           mp2[t[i]]++;
        long long int res=0;
        for(char c='a';c<='z';c++)
            res=res+abs(mp1[c]-mp2[c]);
        return res;
    }
};
