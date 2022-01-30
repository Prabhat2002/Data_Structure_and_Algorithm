class Solution {
public:
    string defangIPaddr(string s) 
    {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='.')
                str=str+"[.]";
            else
                str=str+s[i];
        }
        return str;
    }
};
