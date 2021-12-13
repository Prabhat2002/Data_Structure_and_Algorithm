class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        vector<int> f1(26, -1), f2(26, -1);
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(f1[s[i]-'a']==-1)
              f1[s[i]-'a']=i;
            else
              f2[s[i]-'a']=i;
        }
        int ans=-1;
        for(int i=0;i<26;i++)
            if(f2[i] != -1)
              ans = max(ans, f2[i]-f1[i]-1);
        return ans;
    }
};
