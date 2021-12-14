class Solution {
public:
   int getLucky(string s, int k) 
   {
        string sum;
        int temp = 0;
        for(int i=0;i<s.size();i++)
            sum+=to_string(int(s[i])-96);
        while(k-->0)
        {
            temp = 0;
            for(int i=0;i<sum.size();i++)
                temp+=sum[i]-'0';
            sum = to_string(temp);  
        }        
        return temp;
    }
};
