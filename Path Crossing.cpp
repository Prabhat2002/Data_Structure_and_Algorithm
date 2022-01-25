class Solution {
public:
    bool isPathCrossing(string path) 
    {
        int a=0,b=0;
        set<pair<int,int>>n;
        n.insert({0,0});
        for(char p: path)
        {
           if(p == 'N') 
                b++;
           else if(p == 'S')
                b--;
           else if(p == 'E') 
               a++;
           else 
               a--;

           if(n.find({a,b}) != n.end()) 
               return true;
           else 
               n.insert({a,b});
        }
       return false;
    }
};
