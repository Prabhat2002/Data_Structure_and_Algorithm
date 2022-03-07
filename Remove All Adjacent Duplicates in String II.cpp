class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>>st;
        for(auto a:s)
        {
            if( !st.empty() && st.top().first==a)
                ++st.top().second;
            else
                st.emplace(a,1);
            if(st.top().second==k)
                st.pop();
        }

        string ans="";
        while(!st.empty())
        {
           while(st.top().second)
            {
                ans+=st.top().first;
            --st.top().second;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
