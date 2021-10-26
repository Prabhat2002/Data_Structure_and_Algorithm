class Solution {
public:
    bool halvesAreAlike(string s) 
    {
         vector<char>v={'a','e','i','o','u','A','E','I','O','U'};
         int n=s.length();
         int count1=0,count2=0;
         for(int a=0;a<n/2;a++)
         {
             auto i=find(v.begin(),v.end(),s[a]);
             if(i!=v.end())
               count1++;
         }
         for(int a=n/2;a<n;a++)
         {
             auto i=find(v.begin(),v.end(),s[a]);
             if(i!=v.end())
               count2++;
         }
        if(count1==count2)
            return true;
        return false;
    }
};
