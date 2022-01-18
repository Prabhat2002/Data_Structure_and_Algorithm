class Solution 
{
 public:
    string removeKdigits(string num, int k) 
    {
        stack<char>st;
        int n=num.length();
        for(auto i : num)
        {
            while(!st.empty() && k>0 && st.top()>i)
            {
                st.pop();
                k--;
            }
            if(!st.empty() || i!='0')
                st.push(i);
        }
        
        while(!st.empty() && k--)
            st.pop();
        
        if(st.empty())
            return "0";
        
        while(!st.empty())
        {
            num[n-1]=st.top();
            st.pop();
            n--;
        }
        return num.substr(n);
    }
};
