class Solution {
public:
    int longestValidParentheses(string s) 
    {
		if (s.empty()) 
            return 0;
		vector<int> dangle(s.size(),-1);
		vector<int> matched(s.size(), -1);
		for (size_t i = 1; i < s.size(); ++i)
		{
			dangle[i] = s[i - 1] == '(' ? (i - 1) : dangle[i - 1];
			if (s[i] == ')' && dangle[i] != -1)
			{
				matched[i] = dangle[i];
				dangle[i] = dangle[matched[i]];
			}
		}
		int best = 0;
		int len = 0;
		int i = s.size() - 1;
		while (i >= 0)
		{
			if (matched[i] != -1)
			{
				len += i - matched[i] + 1;
				i = matched[i] - 1;
			}
			else
			{
				best = max(best, len);
				len  = 0;
				--i;
			}
		}
		best = max(best, len);
		return best;    
    }
};
