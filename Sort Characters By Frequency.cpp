class Solution {
public:
    string frequencySort(string s) 
    {
        map<char, int>freq;
        for(auto c : s)
            freq[c]++;
        vector<string>fr(s.size() + 1);
        for(auto k : freq) 
        {
            fr[k.second].push_back(k.first);
        }
            
        string res;
        for (int a=fr.size() - 1;a>=0;a--) 
        {
            for (auto c : fr[a]) 
                res += string(a, c);
        }
        return res; 
    }
};
