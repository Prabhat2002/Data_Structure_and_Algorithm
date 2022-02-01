class Solution {
public:
    string s="0";
    void apply(int n)
    {
        if(n==1)
            return; 
        string st=s;
        reverse(st.begin(),st.end());
        s=s+"1"+inverse(st);
        apply(n-1);
    }    
    char findKthBit(int n, int k) 
    {
         apply(n);
         cout<<s;
         return s[k-1];
    }
    string inverse(string str)
    {
        string str1="";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='1')
                str1+="0";
            else
                str1+="1";
        }
        return str1;
    }
};
