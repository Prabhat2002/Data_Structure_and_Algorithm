class Solution {
public:
    int minSwaps(string s) 
    {
        int cur=0;
        int Right=0;
        for(auto ch:s) 
        {
            if(ch=='[')
               ++cur;
            else
              --cur;
            if(cur<0) 
            {
                cur=0;
                ++Right;
            }
        }
        return (Right+1)/2; 
    }
};
