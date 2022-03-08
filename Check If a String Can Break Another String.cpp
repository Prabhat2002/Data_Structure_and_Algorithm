class Solution 
{
 public:
    bool checkIfCanBreak(string s1, string s2) 
    {
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       int x=1,y=1;
       for(int i=0;i<s1.size();i++)
       {
           if(s1[i]>s2[i])
              x=0;    
       }
       for(int i=0;i<s1.size();i++)
       {
           if(s1[i]<s2[i])
              y=0;    
       } 
       return x+y;
    }
};
