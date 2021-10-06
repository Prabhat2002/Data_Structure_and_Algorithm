class Solution {
public:
    string convertToTitle(int col) 
    {
        string s="";
         while(col>0)
        {
           --col;
           int d= col%26;
           col=col/26;
           s+='A'+d;            
         } 
        reverse(s.begin(), s.end());
        return s;
    }
};
