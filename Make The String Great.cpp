class Solution {
public:
    string makeGood(string s) 
    {
         string gS;
         for(char ch:s)
         {
           if((!gS.empty()) && abs(gS.back()-ch)==32)
               gS.pop_back();
        else  
            gS.push_back(ch);
    }
    return gS;    
    }
};
