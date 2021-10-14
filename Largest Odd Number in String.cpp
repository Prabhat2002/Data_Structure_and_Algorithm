class Solution {
public:
    string largestOddNumber(string num) 
    {
       int n=num.size()-1; 
       int a=n; 
       for(;a>=0;a--)
       {
           int x=num[a];
           x=x-48;
           if(x%2==1)
               break;
       }
       if(a==-1)
           return "";
       string s=num.substr(0,a+1); 
       return s; 
    }
};
