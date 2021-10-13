class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> res(size(code));
        if (k == 0) 
            return res;
        int l=1,r= k;
        if (k < 0) 
        {
            k = -k;
            l=size(code)-k;
            r=size(code)-1;
        }
        // int total;
        int total=accumulate(code.begin()+l,code.begin()+r+1,0);
        // for(int a=l;a<r;a++)
        // {
        //     total+=code[l];
        // }
        for (int i = 0; i < size(code); ++i) 
        {
            res[i] = total;
            total-=code[l++%size(code)];
            total+=code[++r%size(code)];
        }
        return res;    
    }
};
