
class Solution {
public:
    string addBinary(string a, string b) 
    {
    int c=0;
    string r="";
    reverse(a.begin(),a.end()); 
    reverse(b.begin(),b.end());
    int i=0,sum;
    while(i<a.size() || i<b.size())
    {
        sum= c;
        if(i<a.size()) 
            sum+= a[i]-'0';
        if(i<b.size()) 
            sum+= b[i]-'0';
        if(sum==0) 
            c=0, r+='0';
        else if(sum==1)  
            c=0, r+='1';
        else if(sum==2)
            c=1, r+='0';
        else c=1, r+='1';     
        i++;
    }
    if(c==1)  
        r+='1';
    reverse(r.begin(),r.end());
    return r;
    }
};
