class Solution {
public:
    string findLongestWord(string s,vector<string>&d)
    {
        sort(d.begin(), d.end(), [](string &a,string& b){
            return (a.size() == b.size()) ? a < b : a.size() > b.size();
        });
        for(auto word : d)
        {
            int wi = 0, si = 0;
            while(wi < word.size() && si < s.size())
            {
                if(word[wi] == s[si])
                {
                    wi++;
                    si++;
                }
                else
                    si++;
            }
            if(wi == word.size()){
                return word;
            }
        }
        return "";
    }
};
