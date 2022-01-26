class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) 
    {
        vector<pair<int, int>> v;
        for (int i=0;i<indexes.size();++i) 
            v.push_back({indexes[i], i});
        sort(v.rbegin(),v.rend());
        // cout<<v[0].first<<" "<<v[0].second;
        // {{0,0},{2,1}};
        for (auto a:v) 
        {
            int i=a.first;
            string s=sources[a.second],t=targets[a.second];
            if(S.substr(i, s.size())==s) 
                S=S.substr(0, i)+t+S.substr(i+s.size());
        }
        return S;
    }
};
