class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        map<char,int>st;
        int i=0,j=0,ans=-1;
        while(i<s.length())
        {
            st[s[i]]++;
            if(st.size()==k)
                ans=max(ans,i-j+1);
            else if(st.size()>k)
            {
               while(st.size()>k)
               {
                  st[s[j]]--;  
                  if(st[s[j]]==0)
                     st.erase(s[j]);
                  j++;     
               }
            }
            i++;
        }
        return ans;
    }
};
