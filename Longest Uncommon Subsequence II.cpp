class Solution 
{
 public:
    bool isSubsequence(string a,string b)
    {
        int i=0,j=0;
        while(i<a.length()&&j<b.length())
        {
           if(a[i]==b[j])
               i++;
            j++;
        }   
        return i==a.length();
    }
    int findLUSlength(vector<string>& strs) 
    {
        int n=strs.size();
        int maxLen=-1;
        for(int i=0;i<n;i++)
        {
           bool flag=false;
           int currLen=strs[i].length();
           for(int j=0;j<n;j++)
           {
               if(i!=j&&isSubsequence(strs[i],strs[j]))
               {
                  flag=true;
                  break;
               }   
            
           }
           if(!flag)
              maxLen=max(currLen,maxLen);    
        }    
      return maxLen;
    }
};
