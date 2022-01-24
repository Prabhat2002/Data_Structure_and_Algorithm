class Solution 
{
  public:
    bool isAlienSorted(vector<string>& words, string order)
    {
        map<char, char> map;
        for(int i = 0; i < order.size(); i ++)
            map[order[i]] = 'a' + i;
        for(string&word: words)
            for(char& c: word)
                c=map[c];
        for(int i = 1; i < words.size(); i ++)
            if(words[i - 1] > words[i])
                return false;
        return true;   
    }
};
