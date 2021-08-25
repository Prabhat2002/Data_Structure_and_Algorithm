class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
       stack<int>s;
        for(auto x:tokens)
        {
           if(x=="+")
           {
                int i=s.top();
                s.pop();
                int j=s.top();
                s.pop();
                s.push(i+j);
            }
            else if(x=="-")
            {    
                int i=s.top();
                s.pop();
                int j=s.top();
                s.pop();
                s.push(j-i);
            }
            else if(x=="*")
            {   
                int i=s.top();
                s.pop();
                int j=s.top();
                s.pop();   
                s.push(i*j);
            }
            else if(x=="/")
            {    
                int i=s.top();
                s.pop();
                int j=s.top();
                s.pop();   
                s.push(j/i);
            }
            else
            {
                s.push(stoi(x));
            }
        }
        return s.top();
    }    
};
