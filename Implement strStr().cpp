class Solution {
public:
    int strStr(string haystack, string needle) 
    {
       if(needle.length()==0)
           return 0;
        int l=needle.size();
        if (haystack.size() < l) 
            return -1;
        for (int i=0; i<=haystack.size()-l; i++)
        {
         if (string (haystack.begin()+i, haystack.begin()+i+l) == needle) 
            return i;
        }
        return -1;
    }    
};
