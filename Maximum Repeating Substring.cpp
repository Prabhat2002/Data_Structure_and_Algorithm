class Solution {
public:
    int maxRepeating(string sequence, string word) 
    {
        int res = 0;
        string target = word;
        while( sequence.find(target)!=string::npos )
        {
            res++;
            target += word;
        } 
        return res;
    }
};
