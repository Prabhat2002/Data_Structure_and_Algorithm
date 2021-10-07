class Solution {
public:
    int secondHighest(string s) 
    {
        int first = -1, second = -1;
        for (auto c:s) 
        {
            if (!isdigit(c)) 
                continue;
            int d=c-'0';
            if (d>first) 
            {
                second = first;
                first = d;
            } 
            else if (first>d && d>second) 
                second = d;
        }
        return second;
    }
};
