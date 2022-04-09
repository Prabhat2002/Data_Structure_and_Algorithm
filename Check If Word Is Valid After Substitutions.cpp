class Solution 
{
 public:
    bool isValid(string s) 
    {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(st.size()>=2)
            {
                char x=st.top();
                st.pop();
                char y=st.top();
                st.pop();
                if(x=='b' && y=='a' && s[i]=='c')
                    continue;
                else
                {
                    st.push(y);
                    st.push(x);
                    st.push(s[i]);
                }
            }
            else
                 st.push(s[i]);
        }
        if(!st.empty())
            return 0;
        return 2;
    }
};
