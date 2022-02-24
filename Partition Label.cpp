class Solution 
{
 public:
    vector<int> partitionLabels(string s) 
    {
         vector<int>v(26);
         vector<int>res;
         for(int i=0;i<s.length();i++)
             v[s[i]-'a']=i;
        int start=0,end=0;
        for(int i=0;i<s.length();i++)
        {
            end=max(end,v[s[i]-'a']);
            if(i==end)
            {
                 res.push_back(i-start+1);
                 start=i+1;
            }
        }
        return res;
    }
};
