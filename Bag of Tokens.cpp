class Solution 
{
 public:
    int bagOfTokensScore(vector<int>& tokens, int p) 
    {
        sort(tokens.begin(), tokens.end());
        int ans=0;
        if(tokens.size()==0)
            return 0;
        if(p<tokens[0])
            return 0;
        int start=0, end=tokens.size()-1;
        while(start<=end)
        {
            if(p >= tokens[start])
            {
                p=p-tokens[start++];
                ans++;
            }
            else 
            {
               if(start<end)
               {
                  p=p+tokens[end--];
                  ans--;
               }
               else
                  break; 
            }
        }
        return ans;
    }
};
