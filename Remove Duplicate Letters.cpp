class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
     /* vector<int> counter(26, 0);
      stack<char> stk;
        vector<bool> visited(26, false);
        int n = s.size();
        for(int i = 0; i < n; ++i){
            ++counter[s[i]-'a'];
        }
        
        for(char& c : s){
            --counter[c-'a'];
          if(visited[c-'a'])
                continue;            
   while(!stk.empty() && c < stk.top() && counter[stk.top()-'a'] > 0){
                char topc = stk.top();
                stk.pop();
                visited[topc-'a'] = false;
            }
            stk.push(c);
            visited[c-'a'] = true;
        }
        string ans;
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        
        return ans;*/
        int n = s.size();  
        if(n == 0)
            return "";
        vector<int> counter(26, 0);
        for(char& c : s){
            ++counter[c-'a'];
        }
        int start = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] < s[start]){
                start = i;
            }
            --counter[s[i]-'a'];
            if(counter[s[i]-'a'] == 0){
                break;
            }
        }
        
        string nexts = s.substr(start+1);
        auto it = remove(nexts.begin(), nexts.end(), s[start]);
        nexts = std::string(nexts.begin(), it);
        return s[start]+removeDuplicateLetters(nexts);
    }
};
