class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
         int n=s.length();
         set<string>v;
         map<string,int>mp;
         for(int i=0;i<=n-10;i++)
         {
             string st=s.substr(i,10);
             if(mp[st]>=1)
                v.insert(st);
             else
                 mp[st]++;
         }
         vector<string>res(v.begin(),v.end()); 
         return res;
    }
};
