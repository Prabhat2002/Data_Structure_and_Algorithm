class Solution 
{
  public:
    NestedInteger deserialize(string s) 
    {
           if (s.empty()) {
            return NestedInteger();
        }
        if (s[0] != '[') {
            return NestedInteger(stoi(s));
        }
        stack<NestedInteger> stk;
        for (int i = 0, j = 0; j < s.length(); ++j) {
            if (s[j] == '[') {
                stk.emplace(NestedInteger()); 
                i = j + 1;
            } else if (s[j] == ',' || s[j] == ']') {
                if (isdigit(s[j - 1])) {
                    stk.top().add(NestedInteger(stoi(s.substr(i, j - i))));
                }
                if (s[j] == ']' && stk.size() > 1) {
                    NestedInteger cur = stk.top();
                    stk.pop();
                    stk.top().add(cur);
                }
                i = j + 1;
            }
        }
        return stk.top();
    }
};
