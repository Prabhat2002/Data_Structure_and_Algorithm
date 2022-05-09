unordered_map<char,string>mp({{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"},{'0'," "},{'*',"+"}});   
class Solution 
{
 public:
   
    vector<string> letterCombinations(string digits) 
    {
        int n=digits.size();
        vector<string>ans;
         if (n==0) 
            return ans;
        bfs(0,n,ans,"",digits);
        return ans;
    }
    void bfs(int i,int n,vector<string>&ans,string s,string &digits)
    {
        if(i==n)
        {
            ans.push_back(s);
            return;
        }
        
        string cur=mp[digits[i]];
        for(int j=0;j<cur.size();j++)
            bfs(i+1,n,ans,s+cur[j],digits);
    }
};
