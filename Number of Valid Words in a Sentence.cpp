class Solution {
public:
    int countValidWords(string sentence) 
    {
        regex pattern("(^[a-z]+(-[a-z]+)?)?[!,.]?$"); 
        int ans = 0; 
        istringstream iss(sentence); 
        string buf; 
        while (iss>>buf) 
            if(regex_match(buf, pattern)) 
                ++ans; 
        return ans; 
    }
};
