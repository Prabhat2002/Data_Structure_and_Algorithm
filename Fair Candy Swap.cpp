class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob) 
    {
         int diff=(accumulate(alice.cbegin(), alice.cend(), 0)-
                    accumulate(bob.cbegin(),bob.cend(),0)) / 2;
        set<int>setA(alice.begin(),alice.end());
        for (const auto& b:bob) 
        {
            if (setA.count(b + diff)) 
                return {b+diff,b};
        }
        return {};
    }
};
