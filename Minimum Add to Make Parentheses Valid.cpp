class Solution 
{
  public:
    int minAddToMakeValid(string s) 
    {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if(!st.empty() && st.top()=='(')
            {
                if(s[i]==')')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        return st.size();
    }
};
