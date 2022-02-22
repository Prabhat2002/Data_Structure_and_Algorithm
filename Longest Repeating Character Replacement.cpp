class Solution 
{
 public:
    int replace(string s,int k,char c)
    {
       int i=0,j=0,count=0,ans=0;
       while(i<s.length())
       {
           if(s[i]!=c)
               count++;
           while(count>k)
           {
               if(s[j]!=c)
                   count--;
               j++;
           }
           ans=max(ans,i-j+1);
           i++;
       }
       return ans; 
    }
    int characterReplacement(string s, int k) 
    {
       int ans=0;
       set<char>st(s.begin(),s.end());
       for(auto i=st.begin();i!=st.end();i++) 
         ans=max(ans,replace(s,k,*i));
       return ans; 
    }
};
