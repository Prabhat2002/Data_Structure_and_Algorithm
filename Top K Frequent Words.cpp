class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string,int>mp;
        for (auto word : words)
            ++mp[word];
        vector<pair<int,string>>v;
        for (auto i:mp) 
          v.push_back({-i.second,i.first});
        nth_element(v.begin(),v.begin()+k-1,v.end());
        sort(v.begin(),v.begin()+k);  
        vector<string>res;
        for (int i=0;i<k;++i) 
            res.push_back(v[i].second);
        return res;
    }
};
