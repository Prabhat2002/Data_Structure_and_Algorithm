class Solution {
public:
    string removeOuterParentheses(string s) 
    {
         string S="";
         stack<pair<char,char>>q;
         for(int a=0;a<s.length();a++)
         {
             if(q.empty())
               q.push({'(','*'});
             else
             {
                 if(s[a]=='(')
                 {
                     q.push({'(','#'});
                     S=S+'(';
                 }
                 // q={ ( }
                 // S=()()
                 else
                 {
                     auto i=q.top();
                     if(i.second=='#')
                     {
                         // S=S+i.first;
                         S=S+')';
                         q.pop();
                     }
                     else
                     {
                         q.pop();
                     }
                 } 
               }
           }
        return S;
    }
};
