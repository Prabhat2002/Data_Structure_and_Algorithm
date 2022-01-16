class Solution 
{
 public:
    int mostWordsFound(vector<string>& nums) 
    {
        
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            string s=nums[i];
            s=s+" ";
            int count=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==' ')
                    count++;
            }
            res=max(res,count);
        }
        return res;
    }
};
