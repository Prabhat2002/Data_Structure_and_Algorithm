class Solution 
{
 public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
       unordered_map<string, bool> m;
        int res = 0;
        for(auto word : words)
        {
            if(m.find(word) != m.end())
            {
                res += m[word]; 
                continue;
            }
            int i=0, j=0;
            while(i<word.length() && j<s.length())
            {
                if(s[j] == word[i])
                    i++,j++;
                else 
                    j++;
            }
            m[word] = i==word.length();
            res += i==word.length();
        }
        return res;
    }
};












   /* int count=0;
        for(int i=0;i<words.size();i++)
        {
            count=count+check(words[i],s);
        }
        return count;
    }
    bool check(string s, string t)
    {
        if(s.size()<=0)
             return 1;
        int j=0;
        
        for(int i=0;i<t.size();)
        {
             if(s[j]==t[i])
             {
                 j++;
                 i++;
                 if(j>=s.size())
                     return 1;
             }
            else
                i++;
        }
        return 0;
        }
    */
