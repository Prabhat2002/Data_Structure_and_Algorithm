class Solution
{
 public:
    vector <string> ans;
    void util(string &s, int i, unordered_set <string> &u, string &cstr)
    {
        if(i==s.length())
        {
            ans.push_back(cstr); 
            return;
        }
        for(int j=i; j<s.length(); j++)
        {
            if(u.find(s.substr(i, j-i+1))!=u.end())
            {
                int cnt=0;
                if(!cstr.empty())
                {
                    cstr+=" ";
                    cnt++;
                }
                cstr+=s.substr(i, j-i+1);
                cnt+=j-i+1;
                util(s, j+1, u, cstr);
                while(cnt--)
                    cstr.pop_back();
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        unordered_set <string> u(dict.begin(), dict.end());
        string for_util=""; 
        util(s, 0, u, for_util);
        return ans;
    }
};
