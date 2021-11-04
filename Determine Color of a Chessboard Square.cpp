class Solution {
public:
    bool squareIsWhite(string s) 
    {
         int x=s[0]-'a';
         int y=s[1]-'0';
         if((x%2==0 && y%2==0)||(x%2==1 && y%2==1))
             return true;
        return false;
    }
};
