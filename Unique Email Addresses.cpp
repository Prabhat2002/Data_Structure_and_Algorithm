class Solution 
{
 public:
    int numUniqueEmails(vector<string>& emails) 
    {
        set<string>st;
        int n=emails.size();
        for(int i=0;i<n;i++)
        {
            string s;
            for(char e : emails[i]) 
            {
                if(e=='+' || e=='@') 
                   break;
                if(e=='.') 
                   continue;
                s+= e;
            }
            s+=emails[i].substr(emails[i].find('@'));
            st.insert(s);
        }
        return st.size();
    }
};

        
