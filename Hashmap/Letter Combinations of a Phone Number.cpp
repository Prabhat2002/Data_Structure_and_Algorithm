unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"},{'0'," "}};

class Solution 
{
  public:
    void recur(vector<string>&ans,int i,string s,string digits)
    {
        if(i==digits.size())
        {
            ans.push_back(s);
            return;
        }
        string cur=mp[digits[i]];
        for(int j=0;j<cur.size();j++)
            recur(ans,i+1,s+cur[j],digits);
    }
    vector<string> letterCombinations(string digits) 
    {
        int n=digits.size();
        if(n==0)
           return {};
        vector<string>ans;
        recur(ans,0,"",digits);
        return ans;
    }
};
