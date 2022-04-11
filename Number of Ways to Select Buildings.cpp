class Solution {
public:
    long long numberOfWays(string s) 
    {
       int n=s.length(); 
       vector<int>zero(n,0);
       vector<int>one(n,0); 
       for(int i=0;i<n;i++)
       {
           if(i==0)
           {
               zero[i]=s[i]=='0';
               one[i]=s[i]=='1';
           }
           else
           {
               zero[i]=zero[i-1]+(s[i]=='0');
               one[i]=one[i-1]+(s[i]=='1');
           }
       }
       long long int ans=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='0')
               ans=ans+one[i]*(one[n-1]-one[i]);
           else
               ans=ans+zero[i]*(zero[n-1]-zero[i]);
       }
       return ans; 
    }
};
