class Solution {
public:
    string longestWord(vector<string>& words) 
    {
        string best;        
        unordered_set<string> dict(words.begin(), words.end());
        
        for (auto word:words) 
        {
      if(word.length()<best.length()||(word.length() == best.length()&&word>best)) 
                continue;
            string prefix;
            bool valid = true;
            for (int i = 0; i < word.length() - 1 && valid; ++i)
            {
                prefix += word[i];
                if (!dict.count(prefix)) 
                    valid = false;
            }
            if(valid) 
                best = word;
        }
        
        return best;
    }
};
