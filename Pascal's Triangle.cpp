class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
      vector<vector<int>>res;
        vector<int>v;
        
       if(n>=1)  
       {
           v.push_back(1);
           res.push_back(v);  
           // return res;
       }
        
       for(int a=1;a<n;a++)
       {
           vector<int>v1;
           v1.push_back(1);
            for(int b=1;b<a;b++)//a=3 b=1
            {
                int val=res[a-1][b-1]+res[a-1][b];
                v1.push_back(val);
            }
           v1.push_back(1);
           res.push_back(v1);
       }
        return res;
    }
};
