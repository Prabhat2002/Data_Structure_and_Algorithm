class Solution 
{
  public:
    int scoreOfParentheses(string s) 
    {
        stack<int> st;
		int ans=0;
		for(int i=0;i<s.length();i++)
        {
			if(s[i]=='(') 
                st.push(0);
			else
            {
				if(st.top()==0)
                {
					st.pop();
					st.push(1);
				}
				else
                {
					int temp=0;
					while(!st.empty() && st.top()!=0)
                    {
						temp+=st.top();
						st.pop();
					}
					st.pop();
					st.push(2*temp);
				}
			}
		}
		while(!st.empty())
		{
			ans+=st.top();
			st.pop();
		}
		return ans;
    }
};
