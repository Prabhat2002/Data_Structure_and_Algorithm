class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        // vector<int>v;
        int n=s.length();
        int r=n%k;
        if(r>0)
        {
        for(int i=r;i<k;i++)
            s=s+fill;
        }
        int m=s.length();
        vector<string>v(m);
        int p=0;
        for(int i=0;i<m;i=i+k)
        {
            string str="";
           for(int j=i;j<i+k;j++)
           {
               str=str+s[j];
           }
           v[p++]=str; 
           cout<<str; 
        }
        vector<string>res(v.begin(),v.begin()+p);
        return res;
    }
};
