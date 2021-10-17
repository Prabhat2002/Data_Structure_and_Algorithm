class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int area = (C-A)*(D-B) + (G-E)*(H-F);
        if (A>G||C<E||D<F||B>H)
            return area;
       return area-(min(D,H)- max(B,F))*(min(C,G)- max(A,E));
    }
};
