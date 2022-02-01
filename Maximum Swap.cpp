class Solution {
public:
    int maximumSwap(int num) 
    {
        string s=to_string(num);
        for(int i=0;i<s.size()-1;i++)
        {
            int max=s[i]-'0',ind=0;
            bool flag = false;
            for(int j=s.size()-1;j>i;j--)
            {
                if(s[j]-'0'>max)
                {
                    ind=j;
                    flag=true;
                    max=s[j]-'0';
                }
            }
            if(flag)
            {
                swap(s[i],s[ind]);
                break;
            }
        }
        int res = stoi(s);
        return res;
        
    }
};
