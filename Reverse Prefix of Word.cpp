class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int a;
        int temp=100;
        for(a=0;a<word.size();a++)
        {
            if(ch==word[a])
            {
                temp=0;
                break;
            }
        }
        if(temp==100)
            return word;
        
        reverse(word.begin(),word.begin()+a+1);
        return word;
    }
};
