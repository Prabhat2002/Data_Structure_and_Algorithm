class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
           vector<int>v;
           for(int a=0;a<s.length();a++)
           {
               if(s[a]==c)
                   v.push_back(a);
           }
           int x=v[0];
           int y=v[1];
           int n=s.length();
           vector<int>res(n,INT_MAX);
           for(int a=0;a<v.size();a++)
           {
               for(int b=0;b<s.length();b++)
               {
                   res[b]=min(res[b],abs(v[a]-b));
               }
           }
        return res;
    }
};
