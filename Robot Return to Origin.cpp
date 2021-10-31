class Solution {
public:
    bool judgeCircle(string moves) 
    {
        // map<char,int>mp;
        // mp.insert({'L',1});
        // mp.insert({'R',-1});
        // mp.insert({'U',-2});
        // mp.insert({'D',2});
        // int sum=0;
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='U')
                a++;
            else if(moves[i]=='D')
                b++;
            if(moves[i]=='L')
                c++;
            if(moves[i]=='R')
                d++;
            
        }
        if(a==b && c==d)
            return true;
        return false;
    }
};
