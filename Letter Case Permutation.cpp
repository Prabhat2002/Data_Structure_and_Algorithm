class Solution {
public:
    vector<string>res_;
   vector<string> letterCasePermutation(string S) 
   {
 		dfs(S, 0, "");
 		return res_;
 	}
 	void dfs(string s, int index, string temp)
    {
 		if(index == s.length()) res_.emplace_back(temp);
 		else
        {
 			if(!isalpha(s[index])){
 				dfs(s, index + 1, temp + s[index]);
 			}else{
 				dfs(s, index + 1, temp + (char)tolower(s[index]));
 				dfs(s, index + 1, temp + (char)toupper(s[index]));
 			}
        }
    }
};
