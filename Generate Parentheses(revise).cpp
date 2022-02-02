class Solution 
{
 public:
    void paran(vector<string>&res,string s,int i,int j,int n)
    {
        if(i==n && j==n)
        {
            res.push_back(s);
            return;
        }
        if(i<n)
           paran(res,s+'(',i+1,j,n);
        if(i>j)
            paran(res,s+')',i,j+1,n);
        return;
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>res;
        string s="";
        paran(res,s,0,0,n);
        return res;
    }
};
