class Solution 
{
public:
    bool isAdditiveNumber(string num) 
    {
        int n=num.length();
        for(int i=1;i<n-1;i++)
        {
            long long int a=stol(num.substr(0,i));
            if(to_string(a)!=num.substr(0,i))
                break;
            for(int j=i+1;j<n;j++)
            {
                long long int b=stol(num.substr(i,j-i));
                if(to_string(b)!=num.substr(i,j-i))
                    break;
                bool res=check(a,b,num.substr(j),0);
                if(res)
                    return 1;
            }
        }
        return 0;
    }
    bool check(long long int a,long long int b,string s,bool res)
    {
        if(s.length()==0 && res)
            return 1;
        string c=to_string(a+b);
        int i=min(s.length(),c.length());
        if(s.substr(0,i)==c)
            return check(b,stol(c),s.substr(i),1);
        return 0;
    }
};
