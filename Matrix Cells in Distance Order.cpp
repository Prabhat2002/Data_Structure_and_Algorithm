class Solution {
public:
vector<vector<int>>allCellsDistOrder(int R,int C,int r0,int c0) 
    {
         vector<vector<int>>res={{r0, c0}};
        for (int a=1;a<R+C-1;a++) 
        {
            for (int b= -a;b<=a;b++) 
            {
                int r1=r0+b;
                int c1_a=c0+a-abs(b);
                int c1_b=c0+abs(b)-a;
                if (r1>=0 && r1<R) 
                {
                    if (c1_a>=0 && c1_a<C)
                        res.push_back({r1, c1_a});
                    if (c1_a!=c1_b && c1_b>=0 && c1_b<C) 
                        res.push_back({r1,c1_b});    
                }
            }
        }
        return res;
    }
};
