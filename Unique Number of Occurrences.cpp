class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
       map<int,int>mp;
       for(int i=0;i<arr.size();i++)
           mp[arr[i]]++;
       int n=mp.size();
       set<int>s; 
       for(auto i=mp.begin();i!=mp.end();i++)
           s.insert(i->second);
       int m=s.size();
       if(n!=m)
           return 0;
       return 1;
    }
};
