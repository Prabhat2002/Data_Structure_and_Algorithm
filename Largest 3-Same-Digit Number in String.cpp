class Solution 
{
 public:
    string largestGoodInteger(string num) 
    {
        string ans="";
        int max = INT_MIN;
        for(int i=0;i<num.length()-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                string temp=num.substr(i,3);
                int val=stoi(temp);
                if(val>max)
                {
                    ans=temp;
                    max=val;
                }
            }
        }
        return ans;
    }
};
