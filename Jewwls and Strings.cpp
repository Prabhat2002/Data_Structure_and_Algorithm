class Solution {
public:
    int numJewelsInStones(string j,string s) 
    {
        // int n=s.length();
        vector<int>v;
        for(int a=0;a<s.length();a++)
            v.push_back(s[a]);
        int n=v.size();
        for(int a=0;a<j.length();a++)
        {
            auto i=find(v.begin(),v.end(),j[a]);
            if(i!=v.end())
            {
                v.erase(i);
                a--;
            }
        }
        int n1=v.size();
        return n-n1;
    }
};
